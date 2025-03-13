#include "separator.h"
#include <iostream>
#include<string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    OddEvenSeparator separator; 
    string input;
    int number;
    bool flag = true;

    cout << "¬водите числа, как закончите ввод, введите q: \n";

    while (flag) 
    {
        cin >> input;
        if (input == "q") {
            flag = false;
        }
        else {
            if (isOnlyDigits(input)) {
                number = stoi(input);
                separator.add_number(number);
            }
            else
            {
                cout << "¬ведено не число!\n";
            }
        }
    }

    separator.even();
    separator.odd(); 

    return 0;
    
}