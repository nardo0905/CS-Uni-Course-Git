#include <iostream>

bool isPowerOfTwo(int num) {

    if (!num) return false;

    return num & (num - 1);

}

int main() {

    int num;
    std::cin >> num;

    std::cout << ((isPowerOfTwo(num)) ? "No" : "Yes") << std::endl;

    return 0;

}
