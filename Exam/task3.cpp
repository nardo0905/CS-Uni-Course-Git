#include <iostream>
#include <cstring>

const int MAX_SIZE = 1024;

int getNumOfDigits(int num) {

    int digs = 0;

    do {

        digs++;
        num /= 10;

    } while (num > 0);

    return digs;

}

bool convertToStrNumber(char* str) {

    int histogram[26] = {}; //number of occurances of each word
    size_t strLength = strlen(str);

    for (size_t i = 0; i < strLength; i++) {

        int currChar = str[i] - 'a';
        histogram[currChar]++;

    }

    for (size_t i = 0; i < MAX_SIZE; i++) {

        int currChar = str[i] - 'a';
        int currOcc = histogram[currChar];
        int currOccDigs = getNumOfDigits(currOcc);

        for (size_t j = currOccDigs; j > 0; j--) {

            int currDig = currOcc % 10;
            char currDigChar = currDig + '0';
            str[i + j] = currDigChar;
            currDig /= 10;

        }

    }

    std::cout << str;

    // for (size_t i = 0; i < 26; i++) {

    //     std::cout << histogram[i] << ' ';

    // }

    return true;

}

int main() {

    char str[MAX_SIZE] = "aaabcaadcsmaabbbbsaaacc";

    std::cout << convertToStrNumber(str) << std::endl;

    return 0;

}