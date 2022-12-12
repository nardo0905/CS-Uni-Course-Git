#include <iostream>

int strlen(char* str) {

    int len = 0;

    for (int i = 0;;i++) {

        if (str[i] == '\0') {

            break;

        }

        len++;

    }

    return len;

}

int main() {

    char str[5] = "abcd";

    std::cout << strlen(str) << std::endl;

    return 0;

}