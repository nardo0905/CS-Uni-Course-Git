#include <iostream>

void printArr(int* arr, int size) {

    for (int i = 0; i < size; i++) {

        std::cout << arr[i] << ' ';

    }
    std::cout << std::endl;

}

void selectionSort(int *arr, int size) {

    int currMax = -9999999;
    int pos = 0;

    if (size == 1) {

        return;

    }
    for (int i = 0; i < size - 1; i++) {

        if (arr[i] > currMax) {
            
            currMax = arr[i];
            pos = i;
        
        }

    }
    
    std::swap(arr[size - 1], arr[pos]);

    selectionSort(arr, size - 1);

}

int main() {

    int arr[10] = {11, 25, 12, 22, 64};
    selectionSort(arr, 5);
    printArr(arr, 5);

    return 0;

}