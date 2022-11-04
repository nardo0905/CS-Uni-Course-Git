#include <iostream>

bool isLeap(int year) {

    bool isLeap = false;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) isLeap = true;

    return isLeap;

}

bool checkValidity (int day, int month, int year) {

    if (month == 2 && !isLeap(year) && day > 28) {

        return false;

    }

    if (month == 2 && isLeap(year) && day > 29) {

        return false;

    }

    if (month > 12 || month < 1 || day > 31 || day < 1) {

        return false;

    }

    return true;

}

int main () {

    int day, month, year;

    std::cin >> day >> month >> year;

    if (!checkValidity(day, month, year)) {

        std::cerr << "Incorrect date!" << std::endl;
        return 0;

    }

    int daysPassed = 0;
    
    for (int i = 1; i < month; i++) {

        if (i == 2 && isLeap(year)) {
            daysPassed += 29;
            continue;
        }
        if (i == 2 && !isLeap(year)) {
            daysPassed += 28;
            continue;
        }
        if (i != 2 && i < 8 && i % 2 == 0) {
            daysPassed += 30;
            continue;
        }
        if (i != 2 && i < 8 && i % 2 != 0) {
            daysPassed += 31;
            continue;
        }
        if (i != 2 && i >= 8 && i % 2 == 0) {
            daysPassed += 31;
            continue;
        }
        if (i != 2 && i >= 8 && i % 2 != 0) {
            daysPassed += 30;
            continue;
        }

    }

    daysPassed += day;

    std::cout << "Days passed since the beginning of the year: " << daysPassed << " days." << std::endl;

    return 0;

}
