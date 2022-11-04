#include <iostream>

const int MAX_SIZE = 99999;

void fillArray(int *arr, int a, int b) {

    if (a <= b) {

        for (int i = 0, j = a; i < b - a; i++, j++) {

            if (i == b - a - 1) arr[i + 1] = j + 1;

            arr[i] = j;

        }

    }
    if (a > b) {

        for (int i = 0, j = b; i < a - b; i++, j++) {

            if (i == a - b - 1) arr[i + 1] = j + 1;

            arr[i] = j;

        }

    }

}

void printArray(int *arr, int a, int b) {

    if (a <= b) {

        for (int i = 0; i <= b - a; i++) {

            std::cout << arr[i] << " ";

        }

    }
    if (a > b) {

        for (int i = 0; i <= a - b; i++) {

            std::cout << arr[i] << " ";

        }

    }
    
    std::cout << std::endl;

}

int main() {

    int arr[MAX_SIZE];
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    if (a < b) assert(b - a <= MAX_SIZE);
    else assert(a - b <= MAX_SIZE);

    fillArray(arr, a, b);
    printArray(arr, a, b);

    return 0;

}
