#include <iostream>

const char SIGNS[3] = {'+', '-', '*'};
const char DIGITS[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

bool isSign(char ch) {

    for (size_t i = 0; i < 3; i++) {

        if (SIGNS[i] == ch) return true;

    }

    return false;

}

bool isContained(const char* dig, char ch)  {

    for (size_t i = 0; i < 10; i++) {

        if (dig[i] == ch) return true;

    }

    return false;

}

bool isInteger(char* num) {

    for (size_t i = 0; num[i] != '\0'; i++) {

        if (!isContained(DIGITS, num[i])) {

            return false;

        }

    }

    return true;

}

bool isExpression(char* sentence) {

    int signIndex = 0;
    int leftBracket = 0;

    if (isInteger(sentence)) {

        std::cout << sentence << std::endl;
        return true;

    }

    if ()

}

int main() {



    return 0;

}