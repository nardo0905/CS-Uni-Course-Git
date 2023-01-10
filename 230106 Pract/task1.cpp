#include <iostream>

void printPermutations(char* word, int left, int right) {

    if (left == right) {

        std::cout << word << std::endl;

    }
    else {

        for (int i = 1; i <= right; i++){

            std::swap(word[left], word[i]);

            printPermutations(word, left + 1, right);

            std::swap(word[left], word[i]);

        }

    }
 
}

int main() {

    char word[4] = "rat";

    printPermutations(word, 0, 2);

    return 0;

}