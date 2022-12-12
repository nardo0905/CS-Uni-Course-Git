#include <iostream>

void getLongestWord(char* sentence) {

    int currLongest = -1;
    int curr = 0;
    char currWord[1000];

    for (int i = 0;;i++) {

        if (sentence[i] == '\0') break;
        if (sentence[i] == ' ' || sentence[i] == '!') {

            if (curr > currLongest) {

                currLongest = curr;

            }

            curr = 0;
            continue;

        }

        

        curr++;

    }

}

int main() {

    char sentence[10000] = "This is the longest text in the world! Wow! Look at me!";

    return 0;

}