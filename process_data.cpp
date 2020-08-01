//
// Created by yan on 28.07.2020.
//

#include "process_data.h"
#include <iostream>

using namespace std;

Data::Data(const string& path)
    : path_(path) 
    , field_(8, vector<int>(8))
{
}

Data::~Data() {
    field_.clear();
}

std::vector<std::vector<int>>& Data::GetField() {
    ifstream input(path_);
    if(input.is_open()) {
        int state;
        for (int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                input >> state;
                field_[i][j] = state;
                input.ignore(1);
            }
        }
    } else {
        cout << "can't open file" << endl;
    }
    return field_;
}
