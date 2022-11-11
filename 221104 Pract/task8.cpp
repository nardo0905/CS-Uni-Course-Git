#include <iostream>

void fillArray(int *arr, int num) {

    for (int i = 3; i >= 0; i--) {

        arr[i] = num % 10;
        num /= 10;

    }

}

void printAray(int *arr) {

    for (int i = 0; i < 4; i++) {

        std::cout << arr[i];

    }
    std::cout << std::endl;

}

int addTwoBin(int num1, int num2) {

    if ((num1 == 1 || num1 == 0) && (num2 == 1 || num2 == 0)) {

        return 1;

    }
    if (num1 == 0 && num2 == 0) {

        return 0;

    }

    return 0;

}

void solve(int *arr1, int *arr2) {

    int newArr[999999];

    for (int i = 3; i >= 0; i--) {

        // if ((arr1[i] == 1 || arr1[i] == 0) && (arr2[i] == 1 || arr2[i] == 0)) {

        //     newArr[i] = 1;

        // }
        // if (arr1[i] == 0 && arr2[i] == 0) {

        //     newArr[i] = 0;

        // }
        // else {

        // }

        if (arr1[i] == 1 && arr2[i] == 1) {

            newArr[i] = 0;
            newArr[i - 1] = addTwoBin(1, arr2[i-1]);

        }

        newArr[i] = addTwoBin(arr1[i], arr2[i]);

    }

    printAray(newArr);

}

int main() {

    int firstBinary[4];
    int secondBinary[4];

    int num1, num2;
    std::cout << "Enter two 4 bit binary numbers: ";
    std::cin >> num1 >> num2;

    fillArray(firstBinary, num1);
    fillArray(secondBinary, num2);

    solve(firstBinary, secondBinary);

    return 0;

}