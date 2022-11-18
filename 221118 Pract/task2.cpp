#include <iostream>

#include <iostream>

const int MAX_SIZE = 100;

void fillArray(int (*arr)[MAX_SIZE], int colCount, int rowCount) {

    for (int i = 0; i < rowCount; i++) {

        for (int j = 0; j < colCount; j++) {

            int num;
            std::cout << "> ";
            std::cin >> num;
            arr[i][j] = num;

        }

    }

}

void printArray(int (*arr)[MAX_SIZE], int colCount, int rowCount) {

    for (int i = 0; i < rowCount; i++) {

        for (int j = 0; j < colCount; j++) {

            std::cout << arr[i][j] << " ";

        }

        std::cout << std::endl;

    }

}

void matrixProdWithScalar(int (*arr)[MAX_SIZE], int colCount, int rowCount, int scalar) {

    for (int i = 0; i < rowCount; i++) {

        for (int j = 0; j < colCount; j++) {

            arr[i][j] *= scalar;

        }

    }

    printArray(arr, colCount, rowCount);

}

int main() {

    int arr[MAX_SIZE][MAX_SIZE];

    fillArray(arr, 3, 3);
    printArray(arr, 3, 3);

    std::cout << std::endl;

    matrixProdWithScalar(arr, 3, 3, 2);

    return 0;

}
