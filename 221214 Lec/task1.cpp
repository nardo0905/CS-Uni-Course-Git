#include <iostream>

// Да се изведе сумата от елементите на всеки стълб на квадратна матрица с размерност 10x10

const int MATRIX_SIZE = 10;

int main() {

    // int matrix[MATRIX_SIZE][MATRIX_SIZE] = {};

    // for (int j = 0; j < MATRIX_SIZE; j++) {

    //     int sum = 0;

    //     for (int i = 0; i < MATRIX_SIZE; i++) {

    //         sum +=  matrix[i][j];

    //     }

    //     std::cout << sum << " ";

    // }

    for (int i = 0; i < MATRIX_SIZE ;i++) {

        for (int j = i; j >= 0; j--) {

            std::cout << i - j<< ";" << j << " ";

        }
        
        std::cout << std::endl;

    }

    for (int i = MATRIX_SIZE; i <= 2*MATRIX_SIZE-2 ;i++) {

        for (int j = MATRIX_SIZE - 1; j >= i - MATRIX_SIZE + 1; j--) {

            std::cout << j << ";" << i - j << " ";

        }
        
        std::cout << std::endl;

    }

}