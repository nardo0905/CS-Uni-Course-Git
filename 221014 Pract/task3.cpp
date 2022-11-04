#include <iostream>
#include <cmath>

int main() {

    // Напишете програма, която смята лицето на триъгълник:
    // По дадени страна и височина към нея
    // Използвайки Хероновата формула
    double sideA, sideB, sideC, heightC;

    std::cout << "Enter side A, B, C: ";
    std::cin >> sideA >> sideB >> sideC;

    if (sideA <= 0 || sideB <= 0 || sideC <= 0) {

        std::cerr << "Lengths must be greater than 0!";
        return 0;

    }

    double perimeterHalf = (sideA + sideB + sideC) / 2;
    std::cout << "Area of the triangle using Heron's formula: " << (sqrt(perimeterHalf * sqrt(perimeterHalf - sideA) * sqrt(perimeterHalf - sideB) * sqrt(perimeterHalf - sideC))) << std::endl;

    std::cout << "Enter a side and its length: ";
    double side, height;
    std::cin >> side >> height;

    if (side <= 0 || height <= 0) {

        std::cerr << "Lenghts must be greater than 0!";
        return 0;

    }

    std::cout << "Area of the triangle using side C and the height: " << (side * height) / 2 << std::endl;
    
    return 0;

}
