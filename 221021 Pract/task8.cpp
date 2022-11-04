#include <iostream>

int main() {

    // Да се напише програма, която извежда числото n в бинарен вид (без водещи нули).
    int n;
    int binary = 0;
    int leadingZeroCount = 0;
    bool foundOne = false;

    std::cout << ">";
    std::cin >> n;

    while (n > 0) {

        if (n % 2 != 0) {
            
            foundOne = true;

        }

        if (!foundOne) {

            binary *= 10;
            binary += n % 2;
            n /= 2;
            leadingZeroCount++;

        }
        else {

            binary *= 10;
            binary += n % 2;
            n /= 2;

        }

    }

    if (leadingZeroCount > 0) {

        while (binary > 0) {

            std::cout << binary % 10;
            binary /= 10;

        }

        for (int i = 0; i < leadingZeroCount; i++) {

            std::cout << 0;

        }

    }
    else {

        while (binary > 0) {

            std::cout << binary % 10;
            binary /= 10;

        }

    }

    
    
    std::cout << std::endl;

    return 0;

}
