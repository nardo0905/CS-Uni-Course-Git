#include <iostream>

void printArr(int* arr, int size) {

    for (int i = 0; i < size; i++) {

        std::cout << arr[i] << ' ';

    }

    std::cout << std::endl;

}

void selectSortArr(int* arr, int size) {

    for (int i = 0; i < size; i++) {

        int currMin = arr[i];
        int currMinInd = i;

        for (int j = i; j < size; j++) {

            if (arr[j] <= currMin) {

                currMin = arr[j];
                currMinInd = j;

            }

        }

        std::swap(arr[i], arr[currMinInd]);

    }

}

void funnySort(int* arr, size_t size) {

    selectSortArr(arr, size);
    int* helpArr = new int[size];

    for (size_t i = 0, j = 0; i < size; i += 2, j++) {

        std::swap(arr[j], helpArr[i]);

    }

    int sizeHalf = size / 2;

    for (size_t i = 1, j = sizeHalf; i < size; i += 2, j++) {

        std::swap(arr[j], helpArr[i]);

    }

    for (size_t i = 0; i < size; i++) {

        arr[i] = helpArr[i];

    }

    delete [] helpArr;

}

int main() {

    int arr[100] = {1, 3, 2, 2, 3, 1};

    funnySort(arr, 6);
    printArr(arr, 6);

    return 0;
    
}