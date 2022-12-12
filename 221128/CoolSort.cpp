#include <iostream>

void sort(int *arr, int size) {

    int countArr[65536] = {};
    int countSize = 0;

    for (int i = 0; i < size; i++) {

        int currIndex = arr[i];

        if (currIndex >= 0 && currIndex <= 65536) {

            countArr[currIndex]++;
            countSize++;

        }
        


    }

    int index = 0;

    for (int i = 0; i < countSize; i++) {

        int currNumOfNum = countArr[i];

        for (int j = 0; j < currNumOfNum; j++) {

            arr[index] = i;
            index++;

        }

    }

}

void fillArray(int *arr, int size) {

    for (int i = 0; i < size; i++) {

        int num;
        std::cin >> num;
        arr[i] = num;

    }

}

void printArray(int *arr, int size) {

    for (int i = 0; i < size; i++) {

        std::cout << arr[i] << " ";

    }

}

int main() {

    int arr[65536];

    fillArray(arr, 10);
    sort(arr, 10);
    printArray(arr, 10);

    return 0;

}