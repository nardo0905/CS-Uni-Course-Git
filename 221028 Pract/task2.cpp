#include <iostream>
#include <cmath>

double pow(double x, int n) {

    if (n == 0) {

        return 1;

    }

    if (n == 1) {

        return x;

    }

    double startingX = x;

    for (int i = 2; i <= abs(n); i++) {

        x *= startingX;

    }

    if (n > 0) return x;

    return 1.0 / x;

}

int main() {

    // Напишете функция която приема за аргументи х и n като n e цяло число и връща х на степен n. Не можем да използваме функция pow.
    double x;
    int n;

    std::cout << "> ";
    
    try {

        std::cin >> x >> n;

        if (x == 0 && n == 0) {

            throw std::exception();

        }

    } catch(std::exception) {

        std::cout << "Invalid input!" << std::endl;
        return 0;

    }

    x = pow(x, n);

    std::cout << x << std::endl;

    return 0;

}
