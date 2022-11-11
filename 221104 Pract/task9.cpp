#include <iostream>

const int MAX_SIZE = 200;

void fillArray(int *arr, int n) {

    for (int i = 0; i < n; i++) {

        int num = 0;
        std::cout << "> ";
        std::cin >> num;

        arr[i] = num;

    }

}

void solve(int *arr, int n) {

    int countArr[MAX_SIZE];
    int counter = 0;

    for (int i = 0; i < n; i++) {

        countArr[i] = 1;

    }

    for (int i = 0; i < n - 1; i++) {

        if (arr[i] == 999999999) continue;

        for (int j = i + 1; j < n; j++) {

            if (arr[i] == arr[j]) {

                countArr[counter] += 1;
                //counter++;
                arr[j] = 999999999;

            }

        }

        std::cout << arr[i] << " has " << countArr[counter] << " occurances." << std::endl;
        counter++;

    }

    std::cout << arr[n - 1] << " has " << countArr[counter] << " occurances." << std::endl;

}

int main() {

    int arr[MAX_SIZE];
    int n;
    std::cout << "n: ";
    std::cin >> n;
    assert(n > 0 && n <= MAX_SIZE);

    fillArray(arr, n);
    solve(arr, n);

    return 0;

}