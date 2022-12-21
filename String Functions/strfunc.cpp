#include <iostream>

int strlen(char* str) {

    int len = 0;
    while(*str) {

        len++;
        str++;

    }

    return len;

}

char* strcat(char* str1, const char* str2) {

    int str1Index = strlen(str1);

    while(*str2) {

        str1[str1Index] = *str2;
        str2++;
        str1Index++;

    }

    return str1;

}

char* strncat(char* str1, const char* str2, size_t n) {

    int str1Index = strlen(str1);
    size_t iter = 0;

    while(iter < n && *str2) {

        str1[str1Index] = *str2;
        str2++;
        str1Index++;
        iter++;

    }

    return str1;

}

int strcmp(const char* str1, const char* str2) {

    while(*str1 && *str2) {

        if (*str1 < *str2) return -1;
        if (*str1 > *str2) return 1;

        str1++;
        str2++;

    }

    return 0;

}

int strncmp(const char* str1, const char* str2, size_t n) {

    size_t iter = 0;

    if (n < strlen(str1)) {

        strcmp(str1, str2);

    }

    while(*str1 && *str2 && iter < n) {

        if (*str1 < *str2) return -1;
        if (*str1 > *str2) return 1;

        str1++;
        str2++;
        iter++;

    }

    return 0;

}

char* strcpy(char* destination, const char* source) {

    char* destPointer = destination;

    while(*source) {

        *destination = *source;
        destination++;
        source++;

    }
    *destination = '\0';

    return destPointer;

}

char* strncpy(char* destination, const char* source, size_t n) {

    char* destPointer = destination;
    size_t iter = 0;

    while(*source && iter < n) {

        *destination = *source;
        destination++;
        source++;
        iter++;

    }
    *destination = '\0';

    return destPointer;

}

char* strstr(char* str1, const char* str2) {

    char* resPointer = nullptr;
    const char* str2Original = str2;

    while(*str1 && *str2) {

        if (*str1 == *str2) {

            resPointer = str1;
            str2++;

        }
        if (*str1 != *str2) {

            resPointer = nullptr;
            str2 = str2Original;

        }

    }

    return resPointer;

}

char* strstr(char* str1, const char chr) {

    char* resPointer = nullptr;
    // const char* str2Original = str2;

    while(*str1) {

        if (*str1 == chr) {

            resPointer = str1;
            break;

        }

        str1++;

    }

    return resPointer;

}


int main() {

    char str1[80] = "testsdfsdfs";
    // char str2[5] = "abcd";
    // char str3[80] = "tesha";

    // std::cout << strlen(str1) << std::endl;
    // std::cout << strcat(str1, str2) << std::endl;
    // std::cout << strncat(str1, str2, 2) << std::endl;
    // std::cout << strcmp(str1, str3) << std::endl;
    // std::cout << strncmp(str1, str3, 2) << std::endl;
    // std::cout << strcpy(str1, str3) << std::endl;
    // std::cout << strncpy(str1, str3, 2) << std::endl;
    std::cout << strstr(str1, "tsd") << std::endl;
    std::cout << strchr(str1, 's') << std::endl;

    return 0;

}