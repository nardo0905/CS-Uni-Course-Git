#include <iostream>
#include <cstring>

const int MAX_SIZE = 80;

bool isLowerCase(char a) {

    return a >= 'a' && a <= 'z';

}

bool isUpperCase(char a) {

    return a >= 'A' && a <= 'Z';

}

// подточка А)
char getRepeatingGift(char* backpack) {

    size_t backpackSize = strlen(backpack);

    if (backpackSize % 2 != 0) {

        throw "Backpack must have even number of gifts!";

    }

    size_t compartmentSize = backpackSize / 2;
    char* leftComparment = new char[compartmentSize];
    char* rightCompartment = new char[compartmentSize];

    for (size_t i = 0; i < compartmentSize; i++) {

        leftComparment[i] = backpack[i];

    }

    leftComparment[compartmentSize] = '\0';

    for (size_t i = compartmentSize, j = 0; i < backpackSize; i++, j++) {

        rightCompartment[j] = backpack[i];

    }

    rightCompartment[compartmentSize] = '\0';

    // хистограми за малки и главни букви зa двете части на раницата, индексът отговаря на буква, а стойността - броят на срещанията и
    int leftCompLCHist[26] = {};
    int rightCompLCHist[26] = {};
    int leftCompUCHist[26] = {};
    int rightCompUCHist[26] = {};

    for (size_t i = 0; i < compartmentSize; i++) {

        if (isLowerCase(leftComparment[i])) {

            int currChar = leftComparment[i] - 'a';
            leftCompLCHist[currChar]++;

        }
        if (isUpperCase(leftComparment[i])) {

            int currChar = leftComparment[i] - 'A';
            leftCompUCHist[currChar]++;

        }

    }
    for (size_t i = 0; i < compartmentSize; i++) {

        if (isLowerCase(rightCompartment[i])) {

            int currChar = rightCompartment[i] - 'a';
            rightCompLCHist[currChar]++;

        }
        if (isUpperCase(rightCompartment[i])) {

            int currChar = rightCompartment[i] - 'A';
            rightCompUCHist[currChar]++;

        }

    }

    char repeatingGift = '\0';

    for (size_t i = 0; i < 26; i++) {

        if (leftCompLCHist[i] > 0 && rightCompLCHist[i] > 0) {

            repeatingGift = i + 'a';
            delete [] leftComparment;
            delete [] rightCompartment;
            return repeatingGift;

        }

    }
    for (size_t i = 0; i < 26; i++) {

        if (leftCompUCHist[i] > 0 && rightCompUCHist[i] > 0) {

            repeatingGift = i + 'A';
            delete [] leftComparment;
            delete [] rightCompartment;
            return repeatingGift;

        }

    }

    delete [] leftComparment;
    delete [] rightCompartment;
    return repeatingGift;

}

// подточка Б)
int getPriority(char* results, int* priority) {

    int fullPriority = 0;

    while(*results) {

        if (isLowerCase(*results)) {

            int currPrio = *results - 'a';
            fullPriority += priority[currPrio];

        }
        if (isUpperCase(*results)) {

            int currPrio = *results - 'A' + 26;
            fullPriority += priority[currPrio];
            
        }

        results++;

    }

    return fullPriority;

}

// подточка В)
char getGroupID(char* backpack1, char* backpack2, char* backpack3) {

    bool bp1[52] = {};
    bool bp2[52] = {};
    bool bp3[52] = {};
    size_t bp1Len = strlen(backpack1);
    size_t bp2Len = strlen(backpack2);
    size_t bp3Len = strlen(backpack3);
    char groupID = '\0';

    for (size_t i = 0; i < bp1Len; i++) {

        if (isLowerCase(backpack1[i])) {

            int currChar = backpack1[i] - 'a';
            bp1[currChar] = true;

        }
        if (isUpperCase(backpack1[i])) {

            int currChar = backpack1[i] - 'A' + 26;
            bp1[currChar] = true;

        }

    }
    for (size_t i = 0; i < bp2Len; i++) {

        if (isLowerCase(backpack2[i])) {

            int currChar = backpack2[i] - 'a';
            bp2[currChar] = true;

        }
        if (isUpperCase(backpack2[i])) {

            int currChar = backpack2[i] - 'A' + 26;
            bp2[currChar] = true;

        }

    }
    for (size_t i = 0; i < bp3Len; i++) {

        if (isLowerCase(backpack3[i])) {

            int currChar = backpack3[i] - 'a';
            bp3[currChar] = true;

        }
        if (isUpperCase(backpack3[i])) {

            int currChar = backpack3[i] - 'A' + 26;
            bp3[currChar] = true;

        }

    }

    for (size_t i = 0; i < 52; i++) {

        if (bp1[i] && bp2[i] && bp3[i]) {

            if (i < 26) {

                groupID = i + 'a';

            }
            else {

                groupID = i + 'A' - 26;

            }

            return groupID;

        }

    }

    return groupID;

}

int main() {

    size_t n;
    std::cin >> n;
    std::cin.ignore();

    char* results = new char[n];
    char** backpacks = new char*[n];

    for (size_t i = 0; i < n; i++) {

        backpacks[i] = new char[MAX_SIZE];

    }

    for (size_t i = 0; i < n; i++) {

        std::cin.getline(backpacks[i], MAX_SIZE);

        try {

            char res = getRepeatingGift(backpacks[i]);
            results[i] = res;
            std::cout << res << std::endl;

        } catch (const char* e) {

            std::cerr << e << std::endl;
            delete [] results;
            return 1;
            
        }

    }

    int priority[52];

    for (size_t i = 0; i < 52; i++) {

        priority[i] = i + 1;
        
    }
    
    std::cout << getPriority(results, priority) << std::endl;

    for (size_t i = 0; i < n; i++) {

        std::cout << backpacks[i] << std::endl;
        
    }

    for (size_t i = 0; i < n; i += 3) {

        // std::cout << backpacks[i] << ' ' << backpacks[i + 1] << ' ' << backpacks[i + 2] << std::endl;
        std::cout << "Group: " << getGroupID(backpacks[i], backpacks[i + 1], backpacks[i + 2]) << std::endl;

    }

    for (size_t i = 0; i < n; i++) {

        delete [] backpacks[i];

    }

    delete [] results;
    delete [] backpacks;
    return 0;

}