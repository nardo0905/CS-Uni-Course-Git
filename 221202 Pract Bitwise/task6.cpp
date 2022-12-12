#include <iostream>

bool areEqual(int num1, int num2) {

    return (num1 ^ num2) == 0;

}

int main() {

    int num1, num2;
    std::cin >> num1 >> num2;

    std::cout << ((areEqual(num1, num2) ? "Equal" : "Not equal")) << std::endl;

    return 0;

}