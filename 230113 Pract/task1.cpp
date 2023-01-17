#include <iostream>

void printArr(int* arr, int size) {

    for (int i = 0; i < size; i++) {

        std::cout << arr[i] << ' ';

    }

    std::cout << std::endl;

}

void sortArr(int* arr, int size) {

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

int main() {

    int nums[100] = {2, 0, 2, 1, 1, 0};
    sortArr(nums, 6);
    printArr(nums, 6);

    int nums2[100] = {2, 0, 1};
    sortArr(nums2, 3);
    printArr(nums2, 3);

    return 0;

}