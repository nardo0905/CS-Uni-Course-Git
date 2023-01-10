#include <iostream>

void intToBinary(int num) {

    if (num == 0) {

        return;

    }

    intToBinary(num / 2);

    std::cout << num % 2;

}

// int realIntToBinary(int num, int binNum) {

//     if (num == 0) {

//         return binNum;

//     }

//     return realIntToBinary(num / 2, binNum * 10);

//     binNum += (num % 2) * binNum;

// }

int main() {

    intToBinary(5);
    // std::cout << std::endl << realIntToBinary(5, 1);

    return 0;

}