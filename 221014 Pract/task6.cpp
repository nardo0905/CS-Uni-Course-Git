#include <iostream>

int main() {

    // Напишете програма, която въвежда стойности на символни три променливи ch1, ch2, ch3 и намира цялото число, съставено от тези цифри в последователност ch1, ch2, ch3.
    char ch1, ch2, ch3;

    std::cout << "Enter 3 digits: ";
    std::cin >> ch1 >> ch2 >> ch3;

    if ((ch1 < 48 || ch1 > 57) || (ch2 < 48 || ch2 > 57) || (ch3 < 48 || ch3 > 57)) {

        std::cerr << "Characters entered must be digits!" << std::endl;
        return 0;

    }

    int firstDig = (int)ch1;
    int secondDig = (int)ch2;
    int thirdDig = (int)ch3;

    std::cout << "Number: " << ch1 << ch2 << ch3 << std::endl;

    return 0;

}
