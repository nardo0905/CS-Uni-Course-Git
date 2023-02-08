#include <iostream>
#include <cstring>

const int MAX_SIZE = 100;

void findWord(char (*matrix)[MAX_SIZE], int N, int M, int x, int y, int checkPointX, int checkPointY, char* word, char currChar, int wordLen, int currFoundChars, int currIndex, bool &foundWord) {

    if (x > N || y > M || x < 0 || y < 0) {

        return;

    }

    if ((x > 0 || y > 0) && matrix[x][y] == '#') {

        return;

    }

    if (currFoundChars == wordLen) {

        foundWord = true;

    }

    if (matrix[x][y] != currChar) {

        return;

    }

    if (matrix[x][y] == currChar) {

        currIndex++;
        currFoundChars++;
        currChar = word[currIndex];
        matrix[x][y] = '#';
        checkPointX = x;
        checkPointY = y;
        std::cout << x << ' ' << y << std::endl;

        findWord(matrix, N, M, checkPointX + 1, checkPointY, checkPointX, checkPointY, word, currChar, wordLen, currFoundChars, currIndex, foundWord);
        findWord(matrix, N, M, checkPointX, checkPointY + 1, checkPointX, checkPointY, word, currChar, wordLen, currFoundChars, currIndex, foundWord);
        findWord(matrix, N, M, checkPointX - 1, checkPointY, checkPointX, checkPointY, word, currChar, wordLen, currFoundChars, currIndex, foundWord);
        findWord(matrix, N, M, checkPointX, checkPointY - 1, checkPointX, checkPointY, word, currChar, wordLen, currFoundChars, currIndex, foundWord);

        return;

    }

    // x = checkPointX;
    // y = checkPointY;

    findWord(matrix, N, M, x + 1, y, checkPointX, checkPointY, word, currChar, wordLen, currFoundChars, currIndex, foundWord);
    findWord(matrix, N, M, x, y + 1, checkPointX, checkPointY, word, currChar, wordLen, currFoundChars, currIndex, foundWord);
    findWord(matrix, N, M, x - 1, y, checkPointX, checkPointY, word, currChar, wordLen, currFoundChars, currIndex, foundWord);
    findWord(matrix, N, M, x, y - 1, checkPointX, checkPointY, word, currChar, wordLen, currFoundChars, currIndex, foundWord);

    currIndex--;
    currFoundChars--;
    currChar = word[currIndex];
    matrix[checkPointX][checkPointY] = currChar;
    x = checkPointX;
    y = checkPointY;

}

int main() {

    size_t N, M;

    try {
        
        std::cout << "Enter N and M: ";
        std::cin >> N >> M;

        if (N < 0 || N > 100 || M < 0 || M > 100) {

            throw "Incorrect parameters!";

        }

    } catch(const char* e) {

        std::cerr << e << std::endl;
        return 1;

    }

    char matrix[MAX_SIZE][MAX_SIZE];

    for (size_t i = 0; i < N; i++) {

        for (size_t j = 0; j < M; j++) {

            char ch;
            std::cout << "Enter a character: ";
            std::cin >> ch;
            matrix[i][j] = ch;

        }

    }

    std::cin.get();
    char word[MAX_SIZE];
    std::cin.getline(word, 100);

    bool foundWord = false;
    int wordLen = strlen(word);
    char firstChar = word[0];

    findWord(matrix, N, M, 0, 0, 0, 0, word, firstChar, wordLen, 0, 0, foundWord);

    std::cout << foundWord;

    return 0;

}