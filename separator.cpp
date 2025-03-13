#include "separator.h"
#include<string>
#include <iostream>

void OddEvenSeparator::even() {
    cout << "\neven numbers: ";

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 == 0)
            cout << numbers[i] << " ";
    }
}

void OddEvenSeparator::odd() {
    cout << "\nodd numbers: ";

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 != 0)
            cout << numbers[i] << " ";
    }
}

void OddEvenSeparator::add_number(int number) {
    numbers.push_back(number);
}

bool isOnlyDigits(const string& str) {
    for (char c : str) {
        if (c < '0' || c > '9') {
            return false; 
        }
    }
    return true;
}