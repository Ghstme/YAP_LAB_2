#include "stock.h"

void Stock::Add(int w, int v) {
    int id = boxes.size(); 
    boxes.emplace_back(w, v, id); 
}

int Stock::GetByW(int min_w) {
    for (const auto& box : boxes) {
        if (box.weight >= min_w) {
            return box.id; 
        }
    }
    return -1; 
}

int Stock::GetByV(int min_v) {
    for (const auto& box : boxes) {
        if (box.volume >= min_v) {
            return box.id; 
        }
    }
    return -1; 
}
