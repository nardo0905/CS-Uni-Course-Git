#include <iostream>
#include <cmath>

double findDistance(double x1, double y1, double x2, double y2) {

    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

}

double findPerimeter(double a, double b, double c) {

    if (a + b < c || a + c < b || b + c < a) {

        throw "Triangle doesnt exist!";

    }

    std::cout << "Perimeter: ";
    return a + b + c;

}

int main() {

    // Напишете функция която намира обиколката на триъгълник определен по подадени три точки. Ако такъв триъгълник не съществува, хвърлете изключение.
    double x1, y1, x2, y2, x3, y3;

    std::cout << "Enter point one: ";
    std::cin >> x1 >> y1;
    std::cout << "Enter point two: ";
    std::cin >> x2 >> y2;
    std::cout << "Enter point three: ";
    std::cin >> x3 >> y3;

    double sideA = findDistance(x1, y1, x2, y2);
    double sideB = findDistance(x2, y2, x3, y3);
    double sideC = findDistance(x1, y1, x3, y3);

    try {

       std::cout << findPerimeter(sideA, sideB, sideC) << std::endl;

    } catch(const char* e) {

        std::cout << e << std::endl;
        return 0;

    }

    return 0;

}
