#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>

void printSpaces(int num) {

    for (int i = 0; i < num; i++) {

        std::cout << ' ';

    }

}

int main() {

    std::cout << "-----------------------" << std::endl;
    std::cout << "|  |    |    |   | |   \\ " << std::endl;
    std::cout << "|__|____|____|___|_|____\\ " << std::endl;
    std::cout << "|                        \\ " << std::endl;
    std::cout << "`--(o)(o)-----------(o)---'" << std::endl;

    for (int i = 0; i < 150; i++) {

        system("clear");
        printSpaces(i);
        std::cout << "-----------------------" << std::endl;
        printSpaces(i);
        std::cout << "|  |    |    |   | |   \\ " << std::endl;
        printSpaces(i);
        std::cout << "|__|____|____|___|_|____\\ " << std::endl;
        printSpaces(i);
        std::cout << "|                        \\ " << std::endl;
        printSpaces(i);
        std::cout << "`--(o)(o)-----------(o)---'" << std::endl;
        i++;
        std::this_thread::sleep_for(std::chrono::milliseconds(35));

    }

    return 0;

}
