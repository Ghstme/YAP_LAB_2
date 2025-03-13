#pragma once
#include <vector>
#include<string>

using namespace std;

class OddEvenSeparator {
    vector<int> numbers;

public:
    void add_number(int number);

    void even();

    void odd();
};

bool isOnlyDigits(const string& str);