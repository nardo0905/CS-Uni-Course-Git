#include <iostream>

int main() {

    // Да се напише програма, която по въведено число n, извежда цифрите му една по една на екрана.
    int n;

    std::cout << "> ";
    std::cin >> n;

    while (n > 0) {

        std::cout << n % 10 << std::endl;

        n /= 10;

    }

    return 0;

}
