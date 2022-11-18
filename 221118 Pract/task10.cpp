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

void multiplyMatrix(int (*arr1)[MAX_SIZE], int (*arr2)[MAX_SIZE], int rowCount1, int colCount2) {

    assert(rowCount1 == colCount2);

    int tempArr[MAX_SIZE][MAX_SIZE];

    // calculating each element of the new matrix
    for (int i = 0; i < rowCount1; i++) {

        for (int j = 0; j < colCount2; j++) {

            // looping through original matrix
            for (int k = 0; k < rowCount1; k++) {

                tempArr[i][j] += arr1[i][k] * arr2[k][j];

            }

        }

    }

    printArray(tempArr, rowCount1, colCount2);

}

int main() {

    int arr1[MAX_SIZE][MAX_SIZE];
    int arr2[MAX_SIZE][MAX_SIZE];

    fillArray(arr1, 3, 3);
    fillArray(arr2, 3, 3);

    multiplyMatrix(arr1, arr2, 3, 3);

    return 0;

}