//
// Created by yan on 28.07.2020.
//

#include "graphics.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Graphics::DrawField(const std::vector<std::vector<int>> &field, int& step) {
    cout.flush();
    cout << "step: " << step << endl;
    int M = field.size(), N = field[0].size();
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (field[i][j]) {
                cout << setw(2) << "#";
            } else {
                cout << setw(2) << "-";
            }
        }
        cout << endl;
    }
}
