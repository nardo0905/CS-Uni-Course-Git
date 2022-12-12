#include <iostream>

void fillMatrixByRows(int* arr, int k) {

    int** matrix = new int* [k];

    for (int i = 0; i < k; i++) {

        matrix[i] = new int[k];

    }

    for (int i = 0; i < k; i++) {

        for (int j = 0; j < k; j++) {

            matrix[i][j] = arr[i * k + j];
            
        }

    }

    for (int i = 0; i < k; i++) {

        for (int j = 0; j < k; j++) {

            std::cout << matrix[i][j] << ' ';
            
        }

        std::cout << std::endl;

    }

    for (int i = 0; i < k; i++) {

        delete matrix[i];

    }

    delete [] matrix;

}

void fillMatrixByCols(int* arr, int k) {

    int** matrix = new int* [k];

    for (int i = 0; i < k; i++) {

        matrix[i] = new int[k];

    }

    for (int i = 0; i < k; i++) {

        for (int j = 0; j < k; j++) {

            matrix[i][j] = arr[i + j * k];
            
        }

    }

    for (int i = 0; i < k; i++) {

        for (int j = 0; j < k; j++) {

            std::cout << matrix[i][j] << ' ';
            
        }

        std::cout << std::endl;

    }

    for (int i = 0; i < k; i++) {

        delete matrix[i];

    }

    delete [] matrix;

}


int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    fillMatrixByRows(arr, 3);
    std::cout << std::endl;
    fillMatrixByCols(arr, 3);

    return 0;

}