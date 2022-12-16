#include <iostream>
#include <cstring>

void deleteWhitespaces(char* str) {

    int len = strlen(str);
    int count = 0;

    for (int i = 0; i < len - 1; i++) {

        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {

           continue;

        }
        
        str[count++] = str[i];

    }

}

int main() {

    char str[] = "This is a sentence.";

    deleteWhitespaces(str);

    std::cout << str;

    return 0;

}