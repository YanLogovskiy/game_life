#include <iostream>
#include "process_data.h"
#include "graphics.h"
#include "logic.h"

int main() {
    std::cout << "Hello, User" << std::endl;
    Data data("field.txt");
    Logic game(data.GetField());
    game.StartGame();

    return 0;
}
