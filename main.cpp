#include "complex.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double re1, im1, re2, im2;


    cout << "Введите действительную часть первого комплексного числа: ";
    cin >> re1;
    cout << "Введите мнимую часть первого комплексного числа: ";
    cin >> im1;

    Complex* c1 = new Complex(re1, im1); 

    cout << "Введите действительную часть второго комплексного числа: ";
    cin >> re2;
    cout << "Введите мнимую часть второго комплексного числа: ";
    cin >> im2;

    Complex* c2 = new Complex(re2, im2); 


    cout << "c1: ";
    c1->Print();

    cout << "c2: ";
    c2->Print();


    cout << "c1 + c2: ";
    c1->Add(*c2).Print();

    cout << "c1 - c2: ";
    c1->Sub(*c2).Print();

    cout << "c1 * c2: ";
    c1->Mult(*c2).Print();

    try {
        cout << "c1 / c2: ";
        c1->Div(*c2).Print();
    }
    catch (const runtime_error& e) {
        cerr << "Ошибка: " << e.what() << endl;
    }


    cout << "Модуль c1: " << c1->Abs() << endl;
    cout << "Аргумент c1: " << c1->Arg() << endl;


    cout << "Тригонометрическая форма c1: ";
    c1->TrigPrint();

    cout << "Показательная форма c1: ";
    c1->ExpPrint();


    delete c1;
    delete c2;

    return 0;
}
