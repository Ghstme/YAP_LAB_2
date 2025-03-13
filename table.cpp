#include <iostream>
#include <sstream>
#include <iomanip>

#include "table.h"

using namespace std;

Table::Table(int rows, int cols) {
    cout << "Table constructor" << endl;

    this->rows = rows;
    this->cols = cols;

    this->data = new int* [rows];

    for (int i = 0; i < rows; i++) {
        this->data[i] = new int[cols];

        for (int j = 0; j < cols; j++)
            this->data[i][j] = 0;
    }
}

Table::~Table() {
    cout << "Table destructor" << endl;

    for (int i = 0; i < rows; i++) {
        delete[] this->data[i];
    }

    delete[] this->data;
}

int Table::get_value(int row, int col) {
    return data[row][col];
}

void Table::set_value(int row, int col, int value) {
    data[row][col] = value;
}

int Table::n_rows() {
    return rows;
}

int Table::n_cols() {
    return cols;
}

string Table::to_string() {
    stringstream ss;

    ss << "Table:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            ss << setw(5) << this->data[i][j] << " ";
        }

        ss << endl;
    }

    return ss.str();
}

void Table::print() {
    cout << to_string();
}

double Table::average() {
    double sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += this->data[i][j];
        }
    }

    return sum / rows / cols;
}