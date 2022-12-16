#include <iostream>
#include <cstring>

const int MAX_SIZE = 999999;

bool containsChar(char a, char* arr, int size) {

    for (int i = 0; i < size; i++) {

        if (arr[i] == a) return true;

    }

    return false;

}

void deleteCharacters(char *str, char* toDelete) {

    for (int i = 0; str[i] != '\0'; i++) {

        if (containsChar(str[i], toDelete, 5)) {

            str[i] = ' ';

        }

    }

}

int main() {

    char toDelete[5] = {'a', 'b', 'c', 'd', 'e'};
    char str[MAX_SIZE] = "Remove some characters from this string";

    deleteCharacters(str, toDelete);

    std::cout << str << std::endl;

    return 0;

}