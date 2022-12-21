#include <iostream>

void solve(int **arr, size_t cols, size_t rows) {

    for (size_t i = 0; i < cols; i++) {

        for (size_t j = 0; j < rows; j++) {

            int currNum = arr[i][j];
            bool isValid[2] = {false, false}; // valid first condition, valid second condition

            for (size_t k = 0; k < rows; k++) {

                if (k == j) continue;

                if (currNum < arr[i][k]) isValid[0] = false;
                else isValid[1] = true;

            }

            for (size_t l = 0; l < cols; l++) {

                if (l == i) continue;

                if (currNum > arr[l][j]) isValid[0] = false;
                else isValid[1] = true;

            }

            if (isValid[0] && isValid[1]) {

                std::cout << "(" << i << ", " << j << "), " << currNum << std::endl;

            }

        }

    }

}

int main() {

    size_t n, m;
    std::cin >> n >> m;

    int **matrix = new int*[n];

    for (size_t i = 0; i < n; i++) {

        matrix[i] = new int[m];

    }

    for (size_t i = 0; i < n; i++) {

        for (size_t j = 0; j < m; j++) {

            int num;
            std::cin >> num;

            matrix[i][j] = num;

        }

    }

    solve(matrix, n, m);

    for (size_t i = 0; i < n; i++) {

        delete [] matrix[i];

    }

    delete [] matrix;

    return 0;

}