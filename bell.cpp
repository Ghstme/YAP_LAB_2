#include "bell.h"
#include <iostream>

using namespace std;

void Bell::sound() {
    if (is_ding)
    {
        cout << "ding" << endl;
    }
    else
    {
        cout << "dong" << endl;
    }
    is_ding = !is_ding;
}