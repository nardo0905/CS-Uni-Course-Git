#include <iostream>

bool checkValidity(int days, int year) {

    if (days < 0 || days > 365 || year < 0) return false;

    return true;

}

bool isLeap(int year) {

    bool isLeap = false;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) isLeap = true;

    return isLeap;

}


int main() {

    int days, year;
    std::cin >> days >> year;

    if (!checkValidity(days, year)) {

        std::cerr << "Incorrect values!" << std::endl;

    }

    int daysInMonthLeap [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysInMonthNormal [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int currentDays;
    int day, month;

    if (isLeap(year)) {

        for (int i = 0; i < 12; i++) {

            for (int j = 1; j < daysInMonthLeap[i]; j++) {

                currentDays++;

                if (currentDays == days) {

                    day = j;
                    month = i + 1;
                    break;

                }

            }

        }

    }
    else {

        for (int i = 0; i < 12; i++) {

            for (int j = 1; j <= daysInMonthNormal[i]; j++) {

                currentDays++;

                if (currentDays == days) {

                    day = j;
                    month = i + 1;
                    break;

                }

            }

        }

    }
    
    std::cout << "Day: " << day << " Month: " << month << " Year: " << year << std::endl;

    return 0;

}