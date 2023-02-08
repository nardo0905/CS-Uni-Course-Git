#include <iostream>

void traverse(char (*table)[20][9], int rows, int cols) {

    int direction = 0; // 0 -> up; 1 -> left; 2 -> down; 3 -> right
    int rowsCopy = rows;
    int colsCopy = cols;
    int origRows = rows;
    int origCols = cols;

    while (rows != 0 || cols != 0) {

        if (direction == 0) {

            for (int i = rowsCopy - 1; i >= origRows - rows; i--) {

                std::cout << table[i][colsCopy - 1] << ' ';

            }

            direction = 1;
            rows--;

        }

        else if (direction == 1) {

            for (int i = colsCopy - 1; i >= origCols - cols; i--) {

                std::cout << table[rowsCopy - rowsCopy][i] << ' ';

            }

            direction = 2;
            cols--;
        
        }

        else if (direction == 2) {

            for (int i = origRows - rowsCopy; i < rowsCopy - 1; i++) {

                std::cout << table[i][colsCopy - 1] << ' ';

            }

            direction = 3;
        
        }

        else {

            for (int i = origCols - colsCopy; i < colsCopy - 1; i++) {

                std::cout << table[rowsCopy - rowsCopy][i] << ' ';

            }

            direction = 0;
        
        }

        rowsCopy = rows;
        colsCopy = cols;

    }

}

int main() {

    char table[20][20][9] = {
        {"1", "2", "3"},
        {"4", "5", "6"},
        {"7", "8", "9"}
    };

    traverse(table, 3, 3);

    return 0;

}