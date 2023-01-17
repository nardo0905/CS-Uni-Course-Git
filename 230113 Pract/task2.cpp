#include <iostream>
#include <cstring>

int getPrio(const char* order, char ch) {

    for (size_t i = 0; order[i] != '\0'; i++) {

        if (order[i] == ch) return i;

    }

    return -1;

}

void sortStr(const char* order, char* str) {

    size_t size = strlen(str);

    for (size_t i = 0; i < size; i++) {

        char currMin = str[i];
        int currMinIndex = i;

        for (size_t j = i; j < size; j++) {

            int jCharPrio = getPrio(order, str[j]);
            int currMinPrio = getPrio(order, currMin);

            // if (jCharPrio < 0 || currMinPrio < 0) continue;

            if (jCharPrio <= currMinPrio) {

                currMin = str[j];
                currMinIndex = j;

            }

        }

        std::swap(str[i], str[currMinIndex]);

    }

}

int main() {

    const char* order = "bac";
    char s[1000] = "aabcdfabb";

    sortStr(order, s);
    
    std::cout << s << std::endl;

    return 0;

}