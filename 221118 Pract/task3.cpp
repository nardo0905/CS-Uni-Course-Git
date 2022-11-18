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

void addMatrix(int (*arr1)[MAX_SIZE], int (*arr2)[MAX_SIZE], int colCount1, int rowCount1) {

    for (int i = 0; i < rowCount1; i++) {

        for (int j = 0; j < colCount1; j++) {

            arr1[i][j] += arr2[i][j];

        }

    }

    printArray(arr1, colCount1, rowCount1);

}

int main() {

    int arr1[MAX_SIZE][MAX_SIZE];
    int arr2[MAX_SIZE][MAX_SIZE];

    int colCount1 = 3, rowCount1 = 3;
    int colCount2 = 3, rowCount2 = 3;

    assert(colCount1 == colCount2 && rowCount1 == rowCount2);

    fillArray(arr1, colCount1, rowCount1);
    fillArray(arr2, colCount2, rowCount2);

    addMatrix(arr1, arr2, 3, 3);

    return 0;
    
}
