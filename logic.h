//
// Created by yan on 28.07.2020.
//

#ifndef GAME_LIFE_LOGIC_H
#define GAME_LIFE_LOGIC_H

#include <vector>

class Logic {
public:
    explicit Logic(std::vector<std::vector<int>>& init_field)
        : field_(init_field)
        , v_size_(init_field.size())
        , h_size_(init_field[0].size())
        , next_generation_(v_size_, std::vector<int>(h_size_))
        , max_step_(100)
        , step_(0) {}
    void StartGame();
    void Step();
    int CountNeighbor(int x, int y);
private:
    std::vector<std::vector<int>> field_;
    int v_size_;
    int h_size_;
    std::vector<std::vector<int>> next_generation_;
    int max_step_;
    int step_;
};

#endif //GAME_LIFE_LOGIC_H