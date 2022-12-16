#include <iostream>
#include <cstring>

bool hasUniqueChars(const char* str) {

    int len = strlen(str);
    int lettersCount[26] = {};

    for (int i = 0; i < len; i++) {

        int currLetterIndex;

        if (str[i] >= 'a' && str[i] <= 'z') {

            currLetterIndex = str[i] - 'a';
            lettersCount[currLetterIndex]++;

        }
        if (str[i] >= 'A' && str[i] <= 'Z') {

            currLetterIndex = str[i] - 'A';
            lettersCount[currLetterIndex]++;

        }

    }

    for (int i = 0; i < 26; i++) {

        if (lettersCount[i] > 1) return false;

    }

    return true;

}

int main() {

    const char *str = "aabcdef";

    std::cout << hasUniqueChars(str) << std::endl;

    return 0;

}