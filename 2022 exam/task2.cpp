#include <iostream>
#include <cstring>

const char dict[12][50] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "plus", "minus"};
int sum = 0;

bool isInDictionary(char* word) {

    for (size_t i = 0; i < 12; i++) {

        if (!(strcmp(word, dict[i]))) {

            return true;

        }

    }

    return false;

}

void insertInTranslation(char* currWord, char* translation, int &transCounter) {

    if (!strcmp(currWord, "zero")) {

        translation[transCounter] = '0';
        transCounter++;

    }
    else if (!strcmp(currWord, "one")) {

        translation[transCounter] = '1';
        transCounter++;

    }
    else if (!strcmp(currWord, "two")) {

        translation[transCounter] = '2';
        transCounter++;

    }
    else if (!strcmp(currWord, "three")) {

        translation[transCounter] = '3';
        transCounter++;

    }
    else if (!strcmp(currWord, "four")) {

        translation[transCounter] = '4';
        transCounter++;

    }
    else if (!strcmp(currWord, "five")) {

        translation[transCounter] = '5';
        transCounter++;

    }
    else if (!strcmp(currWord, "six")) {

        translation[transCounter] = '6';
        transCounter++;

    }
    else if (!strcmp(currWord, "seven")) {

        translation[transCounter] = '7';
        transCounter++;

    }
    else if (!strcmp(currWord, "eight")) {

        translation[transCounter] = '8';
        transCounter++;

    }
    else if (!strcmp(currWord, "nine")) {

        translation[transCounter] = '9';
        transCounter++;

    }
    else if (!strcmp(currWord, "plus")) {

        translation[transCounter] = '+';
        transCounter++;

    }
    else if (!strcmp(currWord, "minus")) {

        translation[transCounter] = '-';
        transCounter++;

    }
    else {

        return;

    }

}

void emptyString(char* word, size_t size) {

    for (size_t i = 0; i < size; i++) {

        word[i] = '\0';

    }

}

void translateExpression(char *expression, char *translation, size_t size) {

    char currWord[50];
    int currWordCounter = 0;
    int transCounter = 0;
    emptyString(currWord, 50);

    for (size_t i = 0; i < size; i++) {

        currWord[currWordCounter] = expression[i];
        currWordCounter++;

        // std::cout << currWord << std::endl;

        if (isInDictionary(currWord)) {

            insertInTranslation(currWord, translation, transCounter);
            emptyString(currWord, 50);
            currWordCounter = 0;

        }

    }
    translation[transCounter] = '\0';

}

int calculateTranslation(char *translation, int counter) {

    // wack recursion
    // std::cout << curr << std::endl;

    if (!*translation) return 0;

    char curr = *translation;
    std::cout << curr << std::endl;
    char currNum[50];
    emptyString(currNum, 50);
    // translation++;

    if (curr == '-' || curr == '+') {

        switch (curr)
        {
        case '+':
            calculateTranslation(translation, counter);
            sum += atoi(currNum);
            emptyString(currNum, 50);
            break;
        case '-':
            calculateTranslation(translation, counter);
            sum -= atoi(currNum);
            emptyString(currNum, 50);
            break;
        default:
            return 0;
            break;
        }
        // translation++;

    }
    else {

        currNum[counter] = curr;
        counter++;
        // std::cout << "X:" << x << std::endl;
        translation++;
        calculateTranslation(translation, counter);

    }

    return sum;

}

int main() {

    size_t strSize;
    do {

        std::cout << "Enter string size: ";
        std::cin >> strSize;

    } while (strSize < 0);

    char* expression = new char[strSize + 1];
    std::cin.get();
    std::cin.getline(expression, strSize + 1);

    // std::cout << expression << std::endl;

    char* translation = new char[strSize + 1];

    translateExpression(expression, translation, strSize + 1);

    std::cout << translation << std::endl;
    std::cout << calculateTranslation(translation, 0) << std::endl;

    // free-up memory
    delete [] translation;
    delete [] expression;

    return 0;

}