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

int findBiggestElement(int (*arr)[MAX_SIZE], int colCount, int rowCount) {

    int biggest = INT_MIN;

    for (int i = 0; i < colCount; i++) {

        for (int j = 0; j < rowCount; j++) {

            if (arr[i][j] > biggest) {

                biggest = arr[i][j];

            }

        }

    }

    return biggest;

}

int main() {

    int arr[MAX_SIZE][MAX_SIZE];

    fillArray(arr, 3, 3);
    printArray(arr, 3, 3);

    std::cout << "Biggest element: " << findBiggestElement(arr, 3, 3) << std::endl;

    return 0;

}