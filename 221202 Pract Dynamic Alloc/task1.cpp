#include <iostream>

void fillMatrix(int n, int m) {

    int** matrix = new int* [n];

    for (int i = 0; i < n; i++) {

        matrix[i] = new int[m];

    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            int num;
            std::cin >> num;

            matrix[i][j] = num;
            
        }

    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            std::cout << matrix[i][j] << ' ';
            
        }

        std::cout << std::endl;

    }

    for (int i = 0; i < n; i++) {

        delete matrix[i];

    }

    delete [] matrix;

}

int main() {

    int n, m;
    std::cin >> n >> m;

    fillMatrix(n, m);

    return 0;

}