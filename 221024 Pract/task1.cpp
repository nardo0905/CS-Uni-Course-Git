#include <iostream>

int main() {

    // Напишете функция, която приема две дати и връща дали първата от тях е преди втората.
    int day1, month1, year1;
    int day2, month2, year2;

    std::cout << "First date: ";
    std::cin >> day1 >> month1 >> year1;
    std::cout << std::endl << "Second date: ";
    std::cin >> day2 >> month2 >> year2;

    bool isBefore = false;

    if (year1 < year2) isBefore = true;
    if (year1 == year2 && month1 < month2) isBefore = true;
    if (year1 == year2 && month1 == month2 && day1 < day2) isBefore = true;

    std::cout << ((isBefore) ? "Date 1 is before date 2" : "Date 1 is after date 2") << std::endl;

    return 0;

}
