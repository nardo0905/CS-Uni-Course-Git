#include <iostream>

const int MAX_SIZE = 99999;

void fillArray(int *arr, int n) {

    for (int i = 0; i < 2*n + 1; i++) {

        int num = 0;
        std::cout << "> ";
        std::cin >> num;

        arr[i] = num;

    }

}

void solve(int *arr, int n) {

    for (int i = 0; i < 2*n; i++) {

        if(arr[i] == 99999999) continue;

        bool found = false;

        for (int j = i + 1; j < 2*n + 1; j++) {

            if (arr[i] == arr[j]) {

                arr[j] = 99999999;
                found = true;
                break;

            }

        }

        if (!found) {

            std::cout << arr[i] << std::endl;

        }

    }

}

int main() {

    int arr[MAX_SIZE];
    int n;

    std::cout << "n: ";
    std::cin >> n;
    assert((2*n + 1 > 0) && (2*n + 1 <= MAX_SIZE));

    fillArray(arr, n);

    solve(arr, n);

    return 0;

}