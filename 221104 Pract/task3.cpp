#include <iostream>

const int MAX_SIZE = 1000;

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

void reverseArray(int *arr, int n) {

    int tempArr[MAX_SIZE];

    for (int i = n - 1, j = 0; i >= 0; i--, j++) {

        tempArr[j] = arr[i];

    }

    for (int i = 0; i < n; i++) {

        arr[i] = tempArr[i];

    }

}

int main() {

    int arr[MAX_SIZE];
    int n;

    std::cout << "Enter size of array: ";
    std::cin >> n;
    assert(n <= MAX_SIZE);

    fillArray(arr, n);
    printArray(arr, n);
    reverseArray(arr, n);
    std::cout << "Reversed array: ";
    printArray(arr, n);

    return 0;

}
