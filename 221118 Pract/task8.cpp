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

void deleteCol(int (*arr)[MAX_SIZE], int colCount, int rowCount, int k) {

    int tempArr[MAX_SIZE][MAX_SIZE];

    for (int i = 0, r = 0; i < rowCount; i++) {

        for (int j = 0, c = 0; j < colCount; j++) {

            if (j == k - 1) continue;

            tempArr[r][c] = arr[i][j];
            c++;

        }

        r++;

    }

    for (int i = 0; i < rowCount; i++) {

        for (int j = 0; j < colCount - 1; j++) {

            arr[i][j] = tempArr[i][j];

        }

    }

    printArray(arr, colCount - 1, rowCount);

}

int main() {

    int arr[MAX_SIZE][MAX_SIZE];

    fillArray(arr, 3, 3);
    printArray(arr, 3, 3);

    std::cout << std::endl;

    deleteCol(arr, 3, 3, 3);

    return 0;

}