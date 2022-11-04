#include <iostream>

bool prime(int n) {

    bool isPrime = true;

    if (n == 1) {

        return false;

    }
    if (n == 2) {

        return true;

    }

    for (int i = 2; i <= n; i++) {

        if (i != n && n % i == 0) {

            isPrime = false;
            break;

        }

    }

    return isPrime;

}

int main() {

    // Напишете функция, която приема положително цяло число и връща дали то е просто.
    unsigned int n;

    std::cout << "> ";
    std::cin >> n;

    bool isPrime = prime(n);

    std::cout << ((isPrime) ? "Prime" : "Not prime") << std::endl;

    return 0;

}
