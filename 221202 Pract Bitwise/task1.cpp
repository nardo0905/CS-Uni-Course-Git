#include <iostream>

bool evenOrOdd(int num) {

    return num & 1;

}

int main() {

    int num;
    std::cin >> num;

    std::cout << ((evenOrOdd(num)) ? "Odd" : "Even") << std::endl;

    return 0;

}
