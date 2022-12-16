#include <iostream>
#include <cstring>

int containsCount(const char *str1, const char *str2) {

    int count = 0;
    size_t currChar = 0;

    for (size_t i = 0; str1[i] != '\0'; i++) {

        if (str1[i] == str2[currChar]) {

            currChar++;
            if (currChar == strlen(str2)) {

                count++;
                currChar = 0;

            }

        }
        else {

            currChar = 0;

        }

    }

    return count;

}

int main() {

    const char *str = "Wow long wow string wow look atwow this wow!";
    const char *littleStr = "wow";

    std::cout << containsCount(str, littleStr) << std::endl;

}