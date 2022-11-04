#include <iostream>

int main() {

    // Напишете програма, която въвежда едно трицифрено число Х и извежда колко пъти цифрата 7 се съдържа в него (без да използвате условен оператор)
    int number;

    std::cout << "Enter a three digit number: ";
    std::cin >> number;

    bool lastDigit = (number % 10) == 7;
    bool secondDigit = ((number / 10) % 10) == 7;
    bool firstDigit = (number / 100) == 7;

    std::cout << "Number of 7s: " << firstDigit + secondDigit + lastDigit << std::endl;

    return 0;

}
