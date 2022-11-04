#include <iostream>
#include <cmath>

int main() {

    // Напишете програма, която прочита две цели числа n и k и отпечатва n на степен k. (Труден вариант: използвайте най-малкия възможен брой умножения, за да пресметнете степента).
    int n, k;

    std::cout << "Enter a number n and a power k: ";
    std::cin >> n >> k;

    std::cout << "n to the power of k is: " << pow(n, k) << std::endl;

    return 0;

}
