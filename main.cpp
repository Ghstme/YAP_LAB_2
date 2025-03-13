#include <iostream>
#include "stock.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    Stock stock;
    int choice;

    while (true) {
        cout << "1. Добавить коробку\n";
        cout << "2. Получить коробку по грузоподъёмности\n";
        cout << "3. Получить коробку по объёму\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        switch (choice) {
        case 1: {
            int w, v;
            cout << "Введите грузоподъёмность и объем: \n";
            cout << "Грузоподъёмность: ";
            cin >> w;
            cout << "Объём: ";
            cin>> v;
            stock.Add(w, v);
            break;
        }
        case 2: {
            int min_w;
            cout << "Введите минимальную грузоподъёмность: ";
            cin >> min_w;
            int id = stock.GetByW(min_w);
            if (id != -1) {
                cout << "Номер коробки: " << id << "\n";
            }
            else {
                cout << "Коробка не найдена.\n";
            }
            break;
        }
        case 3: {
            int min_v;
            cout << "Введите минимальный объём: ";
            cin >> min_v;
            int id = stock.GetByV(min_v);
            if (id != -1) {
                cout << "Номер коробки: " << id << "\n";
            }
            else {
                cout << "Коробка не найдена.\n";
            }
            break;
        }
        default:
            cout << "Неверный выбор, попробуйте снова.\n";
        }
    }

    return 0;
}
