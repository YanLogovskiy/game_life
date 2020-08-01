//
// Created by yan on 28.07.2020.
//

#ifndef GAME_LIFE_PROCESS_DATA_H
#define GAME_LIFE_PROCESS_DATA_H

#include <string>
#include <fstream>
#include <vector>

class Data {
public:
    explicit Data(const std::string& path);
    ~Data();
    std::vector<std::vector<int>>& GetField();

private:
    std::string path_;
    std::vector<std::vector<int>> field_;
};

#endif //GAME_LIFE_PROCESS_DATA_H
