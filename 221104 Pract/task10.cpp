#include <iostream>

const int MAX_SIZE = 999999;

void fillArray(int *arr, int n) {

    for (int i = 0; i < n; i++) {

        int num = 0;
        std::cout << "> ";
        std::cin >> num;

        arr[i] = num;

    }

}

void bubbleSort(int *arr, int n) {

    int lastSwapIndex, right = n - 1;

    while (right > 0) {

        lastSwapIndex = 0;

        for (int i = 0; i < right; i++) {

            if (arr[i] > arr[i + 1]) {

                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] == arr[i];
                
                lastSwapIndex = i;

            }

        }

        right = lastSwapIndex;

    }

}

void solve(int *arr, int n) {

    int oddNums[MAX_SIZE];
    int evenNums[MAX_SIZE];
    int evenSize = 0;
    int oddSize = 0;

    for (int i = 0, j = 0, k = 0; i < n; i++) {

        if (arr[i] % 2 == 0) {

            evenNums[j] = arr[i];
            j++;
            evenSize++;

        }
        else {

            oddNums[k] = arr[i];
            k++;
            oddSize++;

        }

    }

    bubbleSort(evenNums, evenSize);
    bubbleSort(oddNums, oddSize);

    int mergedArr[MAX_SIZE];

}

int main() {

    int arr[MAX_SIZE];
    int n;
    std::cout << "n: ";
    std::cin >> n;
    assert(n > 0 && n <= MAX_SIZE);

    fillArray(arr, n);

    return 0;

}