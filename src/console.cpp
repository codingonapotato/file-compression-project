#include "../include/console.h"
#include <iostream>
#include <string>
#include <vector>

void Console::init() {
    // in theory should be safe from buffer-overflows since strings are heap-allocated (when it gets too big)
    std::cout << "Thank you for using this file compression utility tool! What would you like to do today?" << std::endl;

    std::vector<std::string> startingOptions{"Compress", "Decompress", "Quit"};
    for (std::string option : startingOptions) {
        std::cout << option << std::endl;
    }

    std::string input;
    std::getline(std::cin, input);

}