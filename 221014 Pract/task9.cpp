#include <iostream>

int main() {

    // Да се напише програма, която въвежда символ и извежда съобщение на екрана дали символът е голяма буква, малка буква, цифра или друг символ.
    char input;
    std::cout << "Enter a character: ";
    std::cin >> input;

    if (input >= 48 && input <= 57) {

        std::cout << "The character you entered is a digit." << std::endl;

    }
    else if (input >= 65 && input <= 90) {

        std::cout << "The character you entered is an uppercase letter." << std::endl;

    }
    else if (input >= 97 && input <= 122) {

        std::cout << "The character you entered is a lowercase letter." << std::endl;

    }
    else {

        std::cout << "The character you entered is another type of symbol." << std::endl;

    }

    return 0;

}
