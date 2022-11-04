#include <iostream>

const int MAX_LEN = 20;

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

void bubbleSort(int *arr, int n) { // Модифициран код от презентацията от лекцията за масиви

    int lastSwapIndex, right = n - 1;

    while (right > 0) {

        lastSwapIndex = 0;
        for (int i = 0; i < right; i++) {

            if (arr[i] > arr[i+1]) {

                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                lastSwapIndex = i; 

            }

        }

    right = lastSwapIndex;

    }

}

int findSmallestNum(int *arr, int n) {

    bubbleSort(arr, n);
    return arr[0];

}

int findBiggestNum(int *arr, int n) {

    bubbleSort(arr, n);
    return arr[n - 1];

}

int elemSum(int *arr, int n) {

    int sum = 0;

    for (int i = 0; i < n; i++) {

        sum += arr[i];

    }

    return sum;

}

int elemProd(int *arr, int n) {

    int prod = 1;

    for (int i = 0; i < n; i++) {

        prod *= arr[i];

    }

    return prod;

}

int elemAvg(int *arr, int n) {

    return elemSum(arr, n) / n;

}

int main() {

    int arr[MAX_LEN];
    int n;
    
    std::cout << "Size of array: ";
    std::cin >> n;

    assert(n <= MAX_LEN);

    fillArray(arr, n);
    printArray(arr, n);

    std::cout << "Smallest element: " << findSmallestNum(arr, n) << std::endl;
    std::cout << "Biggest element: " << findBiggestNum(arr, n) << std::endl;
    std::cout << "Sum of elements: " << elemSum(arr, n) << std::endl;
    std::cout << "Product of elements: " << elemProd(arr, n) << std::endl;
    std::cout << "Average of elements: " << elemAvg(arr, n) << std::endl;

    return 0;

}
