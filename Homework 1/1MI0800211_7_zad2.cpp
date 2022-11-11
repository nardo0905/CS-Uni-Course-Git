#include <iostream>

const int MAX_SIZE = 1024;

bool isPrime (int n) {

    if (n <= 1) return false;
    if (n == 2) return true;

    for (int i = 2; i < n; i++) {

        if (n % i == 0) return false;

    }

    return true;

}

void fillArray(int *arr, int size) {

    for (int i = 0; i < size; i++) {

        int num;
        std::cin >> num;

        arr[i] = num;

    }

}

int solve(int *arr, int size) {

    int problemCount = 0;

    for (int i = 0; i < size - 1; i++) {

        for (int j = i + 1; j < size; j++) {

            if (isPrime(arr[i]) && !isPrime(arr[j])) {

                std::cout << "(" << arr[i] << ", " << arr[j] << ")" << std::endl;
                problemCount++;

            }

            if ((isPrime(arr[i]) && isPrime(arr[j]) &&(arr[i]) > arr[j])) {

                std::cout << "(" << arr[i] << ", " << arr[j] << ")" << std::endl;
                problemCount++;

            }

        }

    }

    return problemCount;

}

int main() {

    int arr[MAX_SIZE];
    int length;

    std::cout << "length > ";
    std::cin >> length;

    assert(length > 0 && length <= MAX_SIZE);

    fillArray(arr, length);
    std::cout << solve(arr, length) << std::endl;

    return 0;

}