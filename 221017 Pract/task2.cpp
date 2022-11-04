#include <iostream>

int main() {

    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int biggest = -1;

    while (number > 0) {

        int digit = number % 10;

        if (digit > biggest) {

            biggest = digit;
            
        }

        number /= 10;

    }

    std::cout << "The biggest digit in the number is: " << biggest << std::endl;

    return 0;

}
