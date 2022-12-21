#include <iostream>

// const int MAX_SIZE = 99999;

// void fillArray(int *arr, size_t size) {

//     for (size_t i = 0; i < size; i++) {

//         int num;
//         std::cin >> num;
//         arr[i] = num;

//     }

// }

int findLenOfSubArr(int *arr, size_t size) {

    int currLen = 1;
    
    for (size_t i = 0; i < size - 1; i++) {

        if (arr[i + 1] < arr[i]) {
            
            currLen = 1;
            continue;

        }

        if (arr[i + 1] > arr[i]) {

            currLen++;

        }

    }

    return currLen;

}

int main() {

    int xs[] = {1, 2, 3, 4, 2, 3, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    std::cout << findLenOfSubArr(xs, 15) << std::endl;

    return 0;

}