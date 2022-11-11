#include <iostream>

const int MAX_SIZE = 99999;

void fillArray(int *arr, int n) {
    
    for (int i = 0; i < n; i++) {

        int num;
        std::cout << "> ";
        std::cin >> num;
        arr[i] = num;

    }

}

bool solve(int *arr, int a, int b, int n) {

    bool isContained[MAX_SIZE];

    for (int i = 0; i < n; i++) {

        for (int j = a; j <= b; j++) {

            // std::cout << j << " " << arr[i] << std::endl;

            if (j == arr[i]) {
                
                isContained[j - a] = true;
                break;

            }

        }

    }

    for (int i = 0; i <= b - a; i++) {

        // std::cout << isContained[i] << std::endl;
        if(!isContained[i]) return false;

    }

    return true;

}

int main() {

    int arr[MAX_SIZE];
    int n;

    std::cout << "> ";
    std::cin >> n;
    assert(n > 0 && n <= MAX_SIZE);

    fillArray(arr, n);

    int a, b;
    std::cout << "Enter an interval: ";
    std::cin >> a >> b;

    std::cout << (solve(arr, a, b, n) ? "Contained" : "Not contained") << std::endl;

    return 0;

}
