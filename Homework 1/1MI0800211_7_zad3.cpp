#include <iostream>
#include <iomanip>

const int MAX_SIZE = 1024;

double sqrt(double num) {

    double x1 = num / 2;
    double epsilon = 1e-12;

    while (x1 - (num / x1) > epsilon) {

        x1 = (x1 + (num / x1)) / 2;

    }

    return x1;

}

double pow(int num, int exp) {

    double result = 1;

    for (int i = 0; i < exp; i++) {

        result = result * num;

    }

    return result;

}

void fillArray(int *xArr, int *yArr, int size) {

    for (int i = 0; i < size; i++) {

        int xCoord, yCoord;
        std::cin >> xCoord >> yCoord;
        assert(xCoord > 0 && yCoord > 0);
        xArr[i] = xCoord;
        yArr[i] = yCoord;

    }

}

double distanceBetweenTwoPoints(int x1, int y1, int x2, int y2) {

    return sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));

}

double findTotalPath(int *xArr, int *yArr, int size) {

    double totalDistance = 0;

    for (int i = 0; i < size - 1; i++) {

        double distance = distanceBetweenTwoPoints(xArr[i], yArr[i], xArr[i+1], yArr[i+1]);
        totalDistance += distance;

    }

    return totalDistance;

}

int main() {

    int xCoordsOne[MAX_SIZE];
    int yCoordsOne[MAX_SIZE];
    int xCoordsTwo[MAX_SIZE];
    int yCoordsTwo[MAX_SIZE];
    int size1;
    int size2;

    std::cout << "size1 > ";
    std::cin >> size1;
    assert(size1 > 0 && size1 <= MAX_SIZE);
    fillArray(xCoordsOne, yCoordsOne, size1);

    std::cout << "size2 > ";
    std::cin >> size2;
    assert(size2 > 0 && size2 <= MAX_SIZE);
    fillArray(xCoordsTwo, yCoordsTwo, size2);

    double totalPathOne = findTotalPath(xCoordsOne, yCoordsOne, size1);
    double totalPathTwo = findTotalPath(xCoordsTwo, yCoordsTwo, size2);

    if (abs(totalPathOne - totalPathTwo) > 0.01) {

        std::cout << "false" << std::endl;

    }
    else {

        std::cout << "true" << std::endl << std::setprecision(3) << totalPathOne << std::endl;

    }

    return 0;

}
