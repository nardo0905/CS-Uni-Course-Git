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

int findBiggestRowSum(int (*arr)[MAX_SIZE], int colCount, int rowCount) {

    int biggestSum = INT_MIN;
    int currSum = 0;
    int currRow = 0;

    for (int i = 0; i < rowCount; i++) {

        currSum = 0;

        for (int j = 0; j < colCount; j++) {

            currSum += arr[i][j];

        }

        if (currSum > biggestSum) {

            biggestSum = currSum;
            currRow = i + 1;

        }

    }

    return currRow;

}

int findBiggestColSum(int (*arr)[MAX_SIZE], int colCount, int rowCount) {

    int biggestSum = INT_MIN;
    int currSum = 0;
    int currCol = 0;

    for (int i = 0; i < colCount; i++) {

        currSum = 0;

        for (int j = 0; j < rowCount; j++) {

            currSum += arr[i][j];

        }

        if (currSum > biggestSum) {

            biggestSum = currSum;
            currCol = i + 1;

        }

    }

    return currCol;

}

int main() {

    int arr[MAX_SIZE][MAX_SIZE];

    fillArray(arr, 3, 3);
    printArray(arr, 3, 3);

    std::cout << "Row with the biggest sum of elements: " << findBiggestRowSum(arr, 3, 3) << std::endl;
    std::cout << "Column with the biggest sum of elements: " << findBiggestColSum(arr, 3, 3) << std::endl;

    return 0;

}
