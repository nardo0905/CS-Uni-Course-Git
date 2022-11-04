#include <iostream>

int main() {

    // Въведете число N и сметнете обема на куб с дължина на страната N.
    int n;
    std::cout << "Enter side length N: ";
    std::cin >> n;

    if (n <= 0) {

        std::cerr << "Side length must be greater than 0!" << std::endl;
        return 0;

    }

    std::cout << "Cube volume = " << n*n*n << std::endl;

    return 0;

}
