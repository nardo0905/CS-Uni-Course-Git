#include <iostream>

int GCD(int n, int m) {

    if (m == 0) {

        throw "You can't divide by 0!";

    }

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

    return n;

}

int main() {

    // Напишете функция, която пресмята най-големия общ делител на 2 числа. Опитайте се да го реализирате чрез алгоритъма на Евклид
    int n, m;

    std::cout << "> ";
    std::cin >> n >> m;

    try {

        std::cout << "GCD: " << GCD(n, m) << std::endl;

    } catch(const char* e) {

        std::cout << e << std::endl;
        return 0;

    }
    

    return 0;

}
