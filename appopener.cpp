#include <iostream>
#include <cstdint>
#include "functions.hpp"


int main() {
    int choice;
    std::cout << "Hello! what would you like to run today? 1. VScode, 2. google: ";
    std::cin >> choice;
    run_thing(choice);
}