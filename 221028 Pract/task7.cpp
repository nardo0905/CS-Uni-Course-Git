#include <iostream>
#include <cmath>

int digitCount(int num) {

    int count = 0;

    while (num > 0) {

        num /= 10;
        count++;

    }

    return count;

}

void toRoman(int num) {

    if (num <= 0) {

        throw "Must be a positive number";

    }

    int digits = digitCount(num);

    for (int i = digits; i >= 1; i--) {

        int currentDig = (num / pow(10, i - 1));

        if (i == 4) {

            switch (currentDig % 10) {

                case 1: std::cout << "M"; break;
                case 2: std::cout << "MM"; break;
                case 3: std::cout << "MMM"; break;

            }

        }

        if (i == 3) {

            switch (currentDig % 10) {

                case 1: std::cout << "C"; break;
                case 2: std::cout << "CC"; break;
                case 3: std::cout << "CCC"; break;
                case 4: std::cout << "CD"; break;
                case 5: std::cout << "D"; break;
                case 6: std::cout << "DC"; break;
                case 7: std::cout << "DCC"; break;
                case 8: std::cout << "DCCC"; break;
                case 9: std::cout << "CM"; break;

            }

        }

        if (i == 2) {

            switch (currentDig % 10) {

                case 1: std::cout << "X"; break;
                case 2: std::cout << "XX"; break;
                case 3: std::cout << "XXX"; break;
                case 4: std::cout << "XL"; break;
                case 5: std::cout << "L"; break;
                case 6: std::cout << "LX"; break;
                case 7: std::cout << "LXX"; break;
                case 8: std::cout << "LXXX"; break;
                case 9: std::cout << "XC"; break;

            }

        }

        if (i == 1) {

            switch (currentDig % 10) {

                case 1: std::cout << "I"; break;
                case 2: std::cout << "II"; break;
                case 3: std::cout << "III"; break;
                case 4: std::cout << "IV"; break;
                case 5: std::cout << "V"; break;
                case 6: std::cout << "VI"; break;
                case 7: std::cout << "VII"; break;
                case 8: std::cout << "VIII"; break;
                case 9: std::cout << "IX"; break;

            }

        }

    }

}

int main() {

    // Напишете функция, която приема цяло число и го изписва на екрана като римско число. Ако числото е отрицателно хвърлете изключение
    int num;

    std::cout << "> ";
    std::cin >> num;

    try {

        toRoman(num);
        std::cout << std::endl;

    } catch(const char* e) {

        std::cout << e << std::endl;

    }

    return 0;

}
