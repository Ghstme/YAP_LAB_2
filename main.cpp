#include <iostream>
#include "table.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "RU");
    srand(time(nullptr));

    Table* table = new Table(5, 5);

    for (int i = 0; i < table->n_rows(); i++) {
        for (int j = 0; j < table->n_cols(); j++) {
            table->set_value(i, j, rand() % 1000);
        }
    }

    table->print();
    cout << "Среднее арифметическое: " << table->average() << endl;
    delete table;

    return 0;
}
