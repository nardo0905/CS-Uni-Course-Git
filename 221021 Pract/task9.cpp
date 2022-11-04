#include <iostream>

int main() {

    // Да се напише програма, която извежда броя на единици и нули в бинарното представяне (без водещи нули) на въведено число n.
    int n;
    int oneCount = 0, zeroCount = 0;
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

            int currBin = binary % 10;

            if (currBin == 1) oneCount++;
            else zeroCount++;

            std::cout << currBin;
            binary /= 10;

        }

        for (int i = 0; i < leadingZeroCount; i++) {

            std::cout << 0;

        }

        zeroCount += leadingZeroCount;

    }
    else {

        while (binary > 0) {

            int currBin = binary % 10;

            if (currBin == 1) oneCount++;
            else zeroCount++;

            std::cout << currBin;
            binary /= 10;

        }

    }

    std::cout << " Count of ones: " << oneCount << ", Count of zeroes: " << zeroCount << std::endl;


    return 0;

}
