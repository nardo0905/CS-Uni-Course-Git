#include <iostream>

void fillArr(int **matrix, int rows, int cols) {

    int size = rows * cols;
    int* oneDimArr = new int[size];
    int curr = 0;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            oneDimArr[curr] = matrix[i][j];
            curr++;

        }

    }

    for (int i = 0; i < size; i++) {

        std::cout << oneDimArr[i] << " ";

    }
    std::cout << std::endl;

    delete [] oneDimArr;

}

int main() {

    int n, m;
    std::cin >> n >> m;

    int** matrix = new int* [n];

    for (int i = 0; i < n; i++) {

        matrix[i] = new int[m];

    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            matrix[i][j] = i + j + 1;
            //std::cout << matrix[i][j] << ' ';

        }

        //std::cout << std::endl;

    }

    fillArr(matrix, n, m);

    for (int i = 0; i < n; i++) {

        delete matrix[i];

    }

    delete [] matrix;

    return 0;

}