#include <iostream>

int main() {

    // Въведете две положителни числа X и Y. Изведете на екрана техните:
    // сбор
    // разлика
    // произведение
    // остатъка при деление на първото с второто число
    int x, y;
    std::cout << "Enter X, Y: ";
    std::cin >> x >> y;

    if (x <= 0 || y <= 0) {

        std::cerr << "Positive numbers only!" << std::endl;
        return 0;

    }

    std::cout << "X + Y = " << x + y << " , X - Y = " << x - y << " , X * Y = " << x*y << " , X mod Y = " << x % y << std::endl; 

    return 0;

}
