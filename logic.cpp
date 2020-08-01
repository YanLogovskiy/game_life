//
// Created by yan on 28.07.2020.
//

#include "logic.h"
#include "graphics.h"
#include <thread>
#include <unistd.h>

using namespace std;

void Logic::StartGame() {
    Graphics draw;
    while(step_ != max_step_) {
        draw.DrawField(field_, step_);
        Step();
        step_++;
        sleep(1);
    }
}

int Logic::CountNeighbor(int m, int n) {
    int neighbors_qt = 0;
    int m_prev = (m == 0) ? v_size_ - 1 : m - 1;
    int m_next = (m == v_size_ - 1) ? 0 : m + 1;
    int n_prev = (n == 0) ? h_size_ - 1 : n - 1;
    int n_next = (n == h_size_ - 1) ? 0 : n + 1;

    neighbors_qt = field_[m_prev][n_prev] + field_[m_prev][n] + field_[m_prev][n_next]
            + field_[m][n_prev] + field_[m][n_next]
            + field_[m_next][n_prev] + field_[m_next][n] + field_[m_next][n_next];

    return neighbors_qt;
}

void Logic::Step() {
    int neighbors_num = 0;
    for (int i = 0; i < v_size_; i++) {
        for (int j = 0; j < h_size_; j++) {
            neighbors_num = CountNeighbor(i, j);
            if (neighbors_num == 3) {
                next_generation_[i][j] = 1;
            } else if (neighbors_num == 2) {
                next_generation_[i][j] = field_[i][j];
            } else {
                next_generation_[i][j] = 0;
            }
        }
    }
    field_ = next_generation_;
}

