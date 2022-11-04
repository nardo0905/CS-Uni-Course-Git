#include <iostream>

double absolute(double n) {

    if (n < 0) return n * -1;

    return n;

}

char lowerToCapitalCase(char a) {

    if (a >= 65 && a <= 90) {

        throw "Invalid input";

    }

    std::cout << "Capital case: ";
    return a - 32;

}

int main() {

    // Да се напише функция която:
    // приема число и връща абсолютната му стойност
    // приема малка буква и връща главна
    double n;
    std::cout << "Enter a real number: ";
    std::cin >> n;
    std::cout << "Absolute value: " << absolute(n) << std::endl;

    char a;

    try {

        std::cout << "Enter a lowercase character: ";
        std::cin >> a;
        
        std::cout << lowerToCapitalCase(a) << std::endl;

    } catch(const char* e) {

        std::cout << e << std::endl;
        return 0;

    }

    return 0;

}
