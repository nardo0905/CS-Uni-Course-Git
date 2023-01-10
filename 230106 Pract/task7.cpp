#include <iostream>

void printArr(bool* arr, int size) {

    for (int i = 0; i < size; i++) {

        std::cout << arr[i] << ' ';

    }
    std::cout << std::endl;

}

void printAllBooleanVectorsRec(int originalLen, int len, int pos, bool* vector) {

    if (len == 0) {

        printArr(vector, originalLen);
        return;

    }

    vector[pos] = 1;
    printAllBooleanVectorsRec(originalLen, len - 1, pos + 1, vector);
    vector[pos] = 0;
    printAllBooleanVectorsRec(originalLen, len - 1, pos + 1, vector);
    
}

void printAllBoolVectors(bool* vector, int size) {

    printAllBooleanVectorsRec(size, size, 0, vector);

}

int main() {

    bool vector[5] = {};

    printAllBoolVectors(vector, 3);

    return 0;

}