#include <iostream>

int main () {

    // Напишете програма, която прочита цяло число и отпечатва дали десетичните му цифри са подредени в нарастващ ред.
    int number;

    std::cout << "> ";
    std::cin >> number;

    int previousNum = 9999999;
    bool inOrder = true;

    while (number > 0) {

        int currNum = number % 10;

        if (currNum > previousNum) {
            
            inOrder = false;
            break;

        }

        previousNum = currNum;
        number /= 10;

    }

    std::cout << ((inOrder) ? "The digits in the number are in order" : "The digits in the number are not in order") << std::endl;

    return 0;

}
