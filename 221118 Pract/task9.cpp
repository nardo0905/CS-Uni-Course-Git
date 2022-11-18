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

bool isMagic(int (*arr)[MAX_SIZE], int colCount, int rowCount) {

    int sum = 0;

    for (int i = 0; i < colCount; i++) {

        sum += arr[0][i];

    }

    for (int i = 0; i < rowCount; i++) {

        int currSum = 0;

        for (int j = 0; j < colCount; j++) {

            currSum += arr[i][j];

        }

        if (currSum != sum) return false;

    }

    for (int i = 0; i < colCount; i++) {

        int currSum = 0;

        for (int j = 0; j < rowCount; j++) {

            currSum += arr[j][i];

        }

        if (currSum != sum) return false;

    }

    return true;

}

int main() {

    int arr[MAX_SIZE][MAX_SIZE];

    fillArray(arr, 3, 3);
    printArray(arr, 3, 3);

    std::cout << std::endl << ((isMagic(arr, 3, 3) ? "Magic" : "Not magic")) << std::endl;

    return 0;

}