#include <iostream>
#include <cstring>

const int MAX_SIZE = 999999;

void strReverse(char* str) {

    int len = strlen(str);
    int lenHalf = len / 2;

    for (int i = 0, j = len - 1; i < lenHalf; i++, j--) {

        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

    }

}

int main() {

    char str[MAX_SIZE];
    std::cin.getline(str, MAX_SIZE);

    strReverse(str);

    std::cout << str << std::endl;

    return 0;

}