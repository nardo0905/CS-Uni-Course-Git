#include <iostream>

int main() {

    // Напишете програма, която въвежда две числа a и b и разменя стойностите им:
    // чрез аритметични операции
    // чрез помощна променлива
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    // метод чрез аритметични операции
    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "Numbers reversed: " << a << " , " << b << std::endl;

    // метод чрез помощна променлива
    int a1, b1;

    std::cout << "Enter two new numbers: ";
    std::cin >> a1 >> b1;

    int temp = a1;
    a1 = b1;
    b1 = temp;

    std::cout << "Numbers reversed: " << a1 << " , " << b1 << std::endl;

    return 0;

}
