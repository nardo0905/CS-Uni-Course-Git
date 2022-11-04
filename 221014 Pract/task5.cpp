#include <iostream>

int main() {

    // Напишете програма, която въвежда едно четирицифрено число и извежда цифрите му в обратен ред, разделени с избран от вас символ.
    int number;

    std::cout << "Enter a 4 digit number: ";
    std::cin >> number;

    int lastDigit = number % 10;
    int thirdDigit = (number / 10) % 10;
    int secondDigit = (number / 100) % 10;
    int firstDigit = number / 1000;

    std::cout << "The number digits in reverse order: " << lastDigit << ", " << thirdDigit << ", " << secondDigit << ", " << firstDigit << std::endl;

    return 0;

}
