#include <iostream>

char* longestWord(const char* str) {

    int currLongest = 0, currLen = 0;
    const char* longestWordStart = nullptr;
    const char* wordStart = nullptr;

    while(*str) {

        wordStart = str;

        while (*str != ' ') {

            currLen++;
            str++;

        }

        if (currLen > currLongest) {

            currLongest = currLen;
            longestWordStart = wordStart;

        }

        currLen = 0;
        str++;

    }

    std::cout << currLongest << std::endl;

    char *longestStr = new char[currLongest + 1];

    for (int i = 0; i < currLongest; i++) {

        longestStr[i] = longestWordStart[i];

    }

    longestStr[currLongest] = '\0';

    return longestStr;

}

int main() {

    const char* str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit  ";
    const char* longestStrWord = longestWord(str);

    std::cout << longestStrWord << std::endl;

    delete [] longestStrWord;

    return 0;

}