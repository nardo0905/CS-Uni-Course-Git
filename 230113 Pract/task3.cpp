#include <iostream>

int getNumberOfOccurances(int* histogram, char ch) {

    if (ch >= 'a' && ch <= 'z') {

        return histogram[ch - 'a'];

    }

    return histogram[ch - 'A' + 26];

}

// bool hasSameNums(int* histogram) {

//     for (int )

// }

void sortByOccurance(char* str) {

    int histogram[52] = {};

    for (size_t i = 0; str[i] != '\0'; i++) {
        
        if (str[i] >= 'a' && str[i] <= 'z') {

            int currIndex = str[i] - 'a';
            histogram[currIndex]++;

        }
        else {

            int currIndex = str[i] - 'A' + 26;
            histogram[currIndex]++;

        }

    }

    for (size_t i = 0; str[i] != '\0'; i++) {

        char currMin = str[i];
        int currMinIndex = i;

        for (size_t j = i; str[j] != '\0'; j++) {

            int jCharOcc = getNumberOfOccurances(histogram, str[j]);
            int currMinOcc = getNumberOfOccurances(histogram, currMin);

            // std::cout << jCharOcc << ' ' << currMinOcc << std::endl;

            if (jCharOcc > currMinOcc) {

                currMin = str[j];
                currMinIndex = j;

            }

        }

        std::swap(str[i], str[currMinIndex]);

    }

}

int main() {

    char str[10000] = "Aabb";
    sortByOccurance(str);

    std::cout << str << std::endl;

    return 0;

}