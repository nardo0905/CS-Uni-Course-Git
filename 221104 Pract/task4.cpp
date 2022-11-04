#include <iostream>

const int MAX_SIZE = 99999;

bool isPrime(int n) {

    if (n <= 1) {

        return false;

    }

    if (n == 2) {

        return true;

    }

    for (int i = 2; i < n; i++) {

        if (n % i == 0) {

            return false;

        }

    }

    return true;

}

void fillArray(int *arr, int n) {

    for (int i = 0; i < n; i++) {

        std::cout << "> ";
        std::cin >> arr[i];

    }

}

void printArray(int *arr, int n) {

    for (int i = 0; i < n; i++) {

        std::cout << arr[i] << " ";

    }
    std::cout << std::endl;

}

void findPrimes(int *arr, int n) {

    int count = 0;

    for (int i = 0; i < n; i++) {

        if (isPrime(arr[i])) {

            count++;
            std::cout << arr[i] << " ";

        }

    }

    std::cout << std::endl << "Count of prime numbers: " << count << std::endl;

}

int main() {

    int arr[MAX_SIZE];
    int n;

    std::cout << "Enter size of array: ";
    std::cin >> n;
    assert(n <= MAX_SIZE);

    fillArray(arr, n);
    printArray(arr, n);
    findPrimes(arr, n);

    return 0;

}
