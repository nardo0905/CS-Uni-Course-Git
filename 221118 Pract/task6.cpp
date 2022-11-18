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

void transpose(int (*arr)[MAX_SIZE], int colCount, int rowCount) {

    int tempArr[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < rowCount; i++) {

        for (int j = 0; j < colCount; j++) {

            tempArr[j][i] = arr[i][j];

        }

    }

    for (int i = 0; i < rowCount; i++) {

        for (int j = 0; j < colCount; j++) {

            arr[i][j] = tempArr[i][j];

        }

    }

    printArray(arr, colCount, rowCount);

}

int main() {

    int arr[MAX_SIZE][MAX_SIZE];

    fillArray(arr, 3, 3);
    printArray(arr, 3, 3);

    std::cout << std::endl;

    transpose(arr, 3, 3);

    return 0;

}