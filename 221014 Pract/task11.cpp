#include <iostream>

int main() {

    // Напишете програма, която да приема цяло положително число (година) и да изписва на конзолата дали годината е високосна или не.
    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;

    bool isLeap = false;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) {

        isLeap = true;

    }

    std::cout << ((isLeap) ? "Leap year." : "Not a leap year.") << std::endl;

    return 0;

}
