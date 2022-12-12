#include <iostream>

void bitSet(unsigned &n, unsigned pos) {

    n = n | (1u << pos); // 1u -> 1 of type unsigned

}

void bitClear(unsigned &n, unsigned pos) {

    unsigned mask = 1u << pos;
    mask = ~mask;

    n = n & mask;

}

void bitFlip(unsigned &n, unsigned pos) {

    // x ^ 0 == x
    // x ^ 1 == ~x
    n = n ^ (1u << pos);

}

bool bitGet(unsigned n, unsigned pos) {

    return (n & (1u << pos)) != 0;

}

int bitMask(int pos) {

    return (~0u) >> (8 * sizeof(unsigned) - pos);
    // return (1 << pos) - 1;

}

bool isPowerOfTwo(int num) {

    if (num == 0) return false;

    return (num & (num - 1)) == 0;

}

int main() {

    unsigned num = 10;
    unsigned pos = 2;

    bitSet(num, pos);
    std::cout << num << std::endl;

    bitClear(num, pos);
    std::cout << num << std::endl;
    
    bitFlip(num, pos);
    std::cout << num << std::endl;

    std::cout << bitGet(num, pos) << std::endl;
    std::cout << bitMask(4) << std::endl;
    std::cout << isPowerOfTwo(7) << std::endl;

    return 0;

}