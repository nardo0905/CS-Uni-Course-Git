#include <iostream>

double divide(int n, int m) {

    if (m == 0) {

        throw "You can't divide by 0!";

    }

    return (double)n / (double)m;

}

int main() {

    // Напишете фунцкия, която приема 2 цели числа и връща тяхното частно. Измислете как да предотвратите деленето на 0.
    int n, m;

    std::cout << "> ";
    std::cin >> n >> m;

    try {

        std::cout << divide(n, m) << std::endl;

    } catch(const char* e) {

        std::cout << e << std::endl;
        return 0;

    }

    return 0;

}
