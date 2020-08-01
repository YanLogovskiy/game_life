//
// Created by yan on 28.07.2020.
//

#ifndef GAME_LIFE_GRAPHICS_H
#define GAME_LIFE_GRAPHICS_H

#include <vector>

class Graphics {
public:
    void DrawField(const std::vector<std::vector<int>>& field, int& step);
};

#endif //GAME_LIFE_GRAPHICS_H
