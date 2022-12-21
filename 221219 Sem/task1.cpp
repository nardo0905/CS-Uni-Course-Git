#include <iostream>

bool twoSum(int *arr, size_t len, int s) {

    for (size_t i = 0; i < len - 1; i++) {

        for (size_t j = i + 1; j < len; j++) {

            if (arr[i] + arr[j] == s) return true;

        }

    }

    return false;

}

int main() {

    int arr[] = {2, 3, 5, 12, 4, 9};

    std::cout << twoSum(arr, 6, 19) << std::endl;

    return 0;

}