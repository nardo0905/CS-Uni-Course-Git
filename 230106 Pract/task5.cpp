#include <iostream>

bool isRising(int* arr, int size, int left) {

    if (left == size - 1) {

        return true;

    }

    if (arr[left] < arr[left + 1]) {

        return isRising(arr, size, left + 1);

    }

    return false;

}

int main() {

    int arr[10] = {3, 6, 9, 12, 20};

    std::cout << isRising(arr, 5, 0) << std::endl;

    return 0;

}