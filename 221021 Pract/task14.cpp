#include <iostream>

int main() {

    // Намерете най-големия общ делител на две числа n и m
    int n, m;

    std::cout << "> ";
    std::cin >> n >> m;

    if (m > n) {

        int temp = n;
        n = m;
        m = temp;

    }

    while (m > 0) {

        int reminder = n % m;
        n = m;
        m = reminder;
        
    }

    std::cout << "GCD: " << n << std::endl;

    return 0;

}
