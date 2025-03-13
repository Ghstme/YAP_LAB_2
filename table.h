#pragma once

#include <string>

class Table {
    int rows;
    int cols;
    int** data;

public:

    Table(int rows, int cols);

    ~Table();

    int get_value(int row, int col);

    void set_value(int row, int col, int value);

    int n_rows();

    int n_cols();

    void print();

    std::string to_string();

    double average();
};