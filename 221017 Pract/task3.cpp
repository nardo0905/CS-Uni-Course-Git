#include <iostream>

int main() {

    // Напишете програма, която прочита цяло число и отпечатва произведението на всички негови цифри, който се намират на четна позиция и се делят на 3.
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int product = 1;
    int position = 0;

    while (number > 0) {

        int digit = number % 10;

        if (position % 2 == 0 && digit % 3 == 0) {

            product *= digit;

        }

        number /= 10;
        position++;

    }

    std::cout << "The product is: " << product << std::endl;

    return 0;

}
