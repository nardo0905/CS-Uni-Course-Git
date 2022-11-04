#include <iostream>

bool checkIfDigit(char c) {

    if (c >= 48 && c <= 57) {

        return true;

    }
    return false;

}

int main() {

    // Напишете функция която приема символ и определя дали е цифра.
    char c;
    std::cout << "> ";
    std::cin >> c;

    std::cout << ((checkIfDigit(c)) ? "Digit" : "Not a digit") << std::endl;

    return 0;

}
