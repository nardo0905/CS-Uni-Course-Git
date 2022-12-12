#include <iostream>

bool equalSigns(int num1, int num2) {

    return (num1 ^ num2) > 0;

}

int main() {

    int num1, num2;
    std::cin >> num1 >> num2;

    std::cout << ((equalSigns(num1, num2) ? "Yes" : "No")) << std::endl;

    return 0;

}