#include <iostream>
#include <cstring>

bool containsLowercase(const char* email) {

    for (int i = 0; email[i] != '\0'; i++) {

        if (email[i] >= 'a' && email[i] <= 'z') return true;

    }

    return false;

}

bool containsUppercase(const char* email) {

    for (int i = 0; email[i] != '\0'; i++) {

        if (email[i] >= 'A' && email[i] <= 'Z') return true;

    }

    return false;

}

bool containsSymbol(const char* email) {

    for (int i = 0; email[i] != '\0'; i++) {

        if (email[i] == '$' || email[i] == '&' || email[i] == '*' || email[i] == '!' || email[i] == '%') {
            
            return true;

        }

    }

    return false;

}

bool containsEnding(const char* email) {

    int atIndex = 0;
    bool hasAt = false;
    bool hasDomain = false;
    bool hasDotCom = false;

    for (int i = 0; email[i] != '\0'; i++) {

        if (email[i] == '@') {

            atIndex = i;
            hasAt = true;

        }

    }

    if (email[atIndex + 1]  >= 'a' && email[atIndex + 1] <= 'z') hasDomain = true;

    for (int i = atIndex + 1; email[i] != '\0'; i++) {

        if (email[i] == '.') {

            if (email[i + 1] == 'c' && email[i + 2] == 'o' && email[i + 3] == 'm') {

                hasDotCom = true;
                break;

            }

        }

    }

    return hasAt && hasDomain && hasDotCom;

}

bool isValidEmail(const char* email) {

    // lowercase letter, uppercase letter, symbol, @domain.com
    return containsLowercase(email) && containsUppercase(email) && containsSymbol(email) && containsEnding(email);

}

int main() {

    const char *email = "Te%st@dom.com";

    std::cout << isValidEmail(email) << std::endl;

    return 0;

}