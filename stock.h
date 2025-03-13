#pragma once

#include <vector>
#include <stdexcept>

using namespace std;

class Box {
public:
    int weight; 
    int volume; 
    int id;     

    Box(int w, int v, int id) : weight(w), volume(v), id(id) {}
};

class Stock {
private:
    vector<Box> boxes; 

public:
    void Add(int w, int v); 
    int GetByW(int min_w);  
    int GetByV(int min_v);  
};

