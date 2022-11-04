#include <iostream>
#include <cmath>

int main() {

    // Да се напише програма, която извежда всички делители на n.
    int n;

    std::cout << "> ";
    std::cin >> n;

    int rootN = sqrt(n);

    for (int i = 1; i <= rootN; i++) {

        if (n % i == 0) {

            std::cout << i << " " << n / i << " ";

        }

    }

    std::cout << std::endl;

    return 0;

}
