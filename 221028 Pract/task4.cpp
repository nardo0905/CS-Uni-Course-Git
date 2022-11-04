#include <iostream>
#include <cmath>

double findDistance(double x1, double y1, double x2, double y2) {

    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

}

int main() {

    // Напишете функция която намира разстоянието между две точки по подадени координати в декартова координатна система.
    double x1, y1, x2, y2;

    std::cout << "Point one: ";
    std::cin >> x1 >> y1;

    std::cout << "Point two: ";
    std::cin >> x2 >> y2;

    std::cout << "Distance between the two points: " << findDistance(x1, y1, x2, y2) << std::endl;

    return 0;

}
