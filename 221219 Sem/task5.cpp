#include <iostream>

const int MAX_SIZE = 99999;

void fillArray(int *arr, size_t size) {

    for (size_t i = 0; i < size; i++) {

        int num;
        std::cin >> num;
        arr[i] = num;

    }

}

int findMissingNum(int *arr, size_t len) {

    int sumAll = ((len + 1) * (len + 2)) / 2;
    // int sum = 0;
    for (size_t i = 0; i < len; i++) {

        sumAll -= arr[i];

    }

    return sumAll;

}

int main() {

    int arr[MAX_SIZE];
    size_t n;

    std::cin >> n;

    fillArray(arr, n);
    std::cout << findMissingNum(arr, n) << std::endl;

    return 0;

}