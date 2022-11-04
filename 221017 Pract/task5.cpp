#include <iostream>

int main() {

    // Напишете програма, която прочита две цели числа a и b и отпечатва дали b се съдържа в a.
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    if (b > a) {

        std::cout << false << std::endl;
        return 0;

    }

    bool found = false;
    int bOriginal = b;

    while (a > 0) {

        int currA = a % 10;
        int currB = b % 10;

        if (currA != currB) {

            b = bOriginal;
            a /= 10;
            continue;

        }

        if (currA == currB) {

            b /= 10;

        }

        a /= 10;

        if (b == 0) {

            found = true;
            break;

        }

    }

    std::cout << found << std::endl;

    return 0;

}
