#include <iostream>

int main() {

    // Напишете програма, която въвежда две числа и извежда по-голямото от тях. Можете ли да го направите без if?
    int n1, n2;
    std::cout << "Enter two numbers: ";
    std::cin >> n1 >> n2;

    std::cout << ((n1 < n2) ? "Number one is bigger than number two" : "Number two is bigger than number one") << std::endl;

    return 0;

}
