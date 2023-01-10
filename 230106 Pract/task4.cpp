#include <iostream>

int charCountRec(char* str, char c, int count) {

    if (*str == '\0') {

        return count;

    }

    if (*str == c) {
        
        return charCountRec(str + 1, c, count + 1);

    }
    
    return charCountRec(str + 1, c, count);

}

int charCount(char* str, char c) {

    return charCountRec(str, c, 0);

}

int main() {

    char str[10] = "applllle";

    std::cout << charCount(str, 'l') << std::endl;

    return 0;

}