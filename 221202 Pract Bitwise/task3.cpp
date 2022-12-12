#include <iostream>

int getSixthBit(int num) {

    int mask = 1 << 6;
    int res = num & mask;

    if (res > 0) return 1;

    return 0;

}

int main() {

    int num;
    std::cin >> num;

    return 0;

}