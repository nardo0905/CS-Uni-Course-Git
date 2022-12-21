#include <iostream>

bool validSudoki(int (*sudoku)[9]) {

    for (int i = 0; i < 9; i++) {

        for (int j = 0; j < 9; j++) {

            int currNum = sudoku[i][j];
            if (currNum <= 0 || currNum > 9) {

                throw "Invalid sudoku arguement";

            }

            for (int r = 0; r < 9; r++) {

                if (r == j) continue;

                if(currNum == sudoku[i][r]) return false;

            }

            for (int c = 0; c < 9; c++) {

                if (c == i) continue;

                if(currNum == sudoku[c][j]) return false;

            }

        }

    }

    return true;

}

int main() {

    int sudoku[9][9] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9,},
        {2, 3, 4, 5, 6, 7, 8, 9, 1,},
        {3, 4, 5, 6, 7, 8, 9, 1, 2,},
        {4, 5, 6, 7, 8, 9, 1, 2, 3,},
        {5, 6, 7, 8, 9, 1, 2, 3, 4,},
        {6, 7, 8, 9, 1, 2, 3, 4, 5,},
        {7, 8, 9, 1, 2, 3, 4, 5, 6,},
        {8, 9, 1, 2, 3, 4, 5, 6, 7,},
        {9, 1, 2, 3, 4, 5, 6, 7, 8}
    };

    try {

        std::cout << validSudoki(sudoku) << std::endl;

    } catch(const char* e) {

        std::cerr << e << std::endl;
        return 1;

    }

    return 0;

}