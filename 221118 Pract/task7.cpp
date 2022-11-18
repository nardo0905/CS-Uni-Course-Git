#include <iostream>
#include <cmath>

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

bool isPrime(int num) {

    if (num < 2) return false;

    if (num == 2) return true;

    double sqrtN = sqrt(num);

    for (int i = 2; i <= sqrtN; i++) {

        if (num % i == 0) return false;

    }

    return true;

}

void findPrimesAboveDiag(int (*arr)[MAX_SIZE], int colCount, int rowCount) {

    for (int i = 0; i < rowCount; i++) {

        for (int j = 0; j < colCount; j++) {

            if (i == j && isPrime(arr[i][j])) {

                std::cout << arr[i][j] << " ";

            }

            if (i != j && j < i) {

                continue;

            }

            if (i != j && j > i) {

                if (isPrime(arr[i][j])) {

                    std::cout << arr[i][j] << " ";

                }

            }

        }

    }

    std::cout << std::endl;

}

int main() {

    int arr[MAX_SIZE][MAX_SIZE];

    fillArray(arr, 4, 4);
    printArray(arr, 4, 4);

    std::cout << std::endl;

    findPrimesAboveDiag(arr, 4, 4);

    return 0;

}