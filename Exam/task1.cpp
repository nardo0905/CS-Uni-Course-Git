#include <iostream>

const int MAX_SIZE = 101;

bool equalRings(int (*matrix)[MAX_SIZE], size_t size) {

    size_t centerElemIndex = size / 2;
    int targetSum = matrix[centerElemIndex][centerElemIndex];

    for (size_t i = 0; i < centerElemIndex; i++) {

        int currSum = 0;
        size_t j = i;

        while (j < size - i) {

            currSum += matrix[i][j];
            std::cout << matrix[i][j] << std::endl;
            j++;

        }

        for (size_t k = i + 1; k < size - i; k++) {

            currSum += matrix[k][j - 1];
            std::cout << matrix[k][j - 1] << std::endl;

        }

        size_t l = size - 1;
        while (l > size - j) {

            currSum += matrix[j - 1][l - 1];
            std::cout << matrix[j - 1][l - 1] << std::endl;
            l--;

        }

        for (size_t m = j - 2; m > l; m--) {

            currSum += matrix[m][l];
            std::cout << matrix[m][l] << std::endl;

        }

        if (currSum != targetSum) {

            std::cout << "(" << i << ", " << i << ")" << std::endl;
            return false;

        }

    }

    std::cout << "(" << -1 << ", " << -1 << ")" << std::endl;
    return true;
    
}

int main() {

    int matrix[MAX_SIZE][MAX_SIZE] = {

        {1, 2, -3, 5, -2},
        {-5, 10, 5, -2, 1},
        {1, 13, 20, 0, -3},
        {2, -7, 5, 10, 3},
        {10, 2, 2, 3, 1}

    };

    std::cout << equalRings(matrix, 5) << std::endl;

    return 0;

}