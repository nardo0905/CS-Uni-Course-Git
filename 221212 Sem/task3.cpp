#include <iostream>

void bitSet(unsigned &n, unsigned pos) {

    n = n | (1u << pos); // 1u -> 1 of type unsigned

}

bool bitGet(unsigned n, unsigned pos) {

    return (n & (1u << pos)) != 0;

}

unsigned bitMask(int pos) {

    return (~0u) >> (8 * sizeof(unsigned) - pos);
    // return (1 << pos) - 1;

}

bool isPangram(const char *str) {

    unsigned mask = 0u;

    for(size_t i = 0; str[i] != '\0'; i++) {

        const char letter = str[i];

        if (letter == ' ') continue;

        if (letter >= 'a' && letter <= 'z') {
            
            int currPos = (str[i] - 'a');
            bitSet(mask, currPos);

        }
        if (letter >= 'A' && letter <= 'Z') {

            int currPos = (str[i] - 'A');
            bitSet(mask, currPos);

        }

    }

    return mask == bitMask(26);

}

int main() {

    const char *str = "The quick brown fox jumps over the lazy dog";
    std::cout << isPangram(str) << std::endl;

    return 0;

}