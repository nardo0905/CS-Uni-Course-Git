#include <iostream>

int main() {

    // Да се напише програма, която проверява дали дадено число n е просто.
    int n;

    std::cout << "> ";
    std::cin >> n;

    if (n <= 1) {

        std::cerr << "Not prime." << std::endl;
        return 0;

    }

    if (n == 2) {

        std::cout << "Prime." << std::endl;
        return 0;

    }

    bool isPrime = true;

    for (int i = 2; i < n; i++) {

        if (n % i == 0) {

            isPrime = false;
            break;

        }

    }

    std::cout << ((isPrime) ? "Prime." : "Not prime.") << std::endl;

    return 0;

}
