#include "bell.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    Bell bell;
    cout << "Сколько раз напечатать:";
    int x;
    cin >> x;
    
    for (int i = 0; i < x; ++i) {
        bell.sound();
    }

    return 0; 
}