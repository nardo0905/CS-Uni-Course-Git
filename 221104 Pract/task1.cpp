#include <iostream>

void printFirst(int n) {

    for (int i = 1; i <= n; i++) {

        for (int j = 0; j <= n - i; j++) {

            std::cout << " ";

        }

        for  (int k = 1; k <= i; k++) {

            std::cout << k << ' ';

        }

        std::cout << std::endl;

    }

}

void printSecond(int n) {

    for (int i = n; i >= 1; i--) {

        for (int j = 0; j <= n - i; j++) {

            std::cout << " ";

        }

        for  (int k = 1; k <= i; k++) {

            std::cout << k << ' ';

        }

        std::cout << std::endl;

    }

}

void printThird(int n) {

    for (int i = n; i >= 2; i--) {

        for (int j = 0; j <= n - i; j++) {

            std::cout << " ";

        }

        for  (int k = 1; k <= i; k++) {

            std::cout << k << ' ';

        }

        std::cout << std::endl;

    }

    for (int i = 1; i <= n; i++) {

        for (int j = 0; j <= n - i; j++) {

            std::cout << " ";

        }

        for  (int k = 1; k <= i; k++) {

            std::cout << k << ' ';

        }

        std::cout << std::endl;

    }

}

void printFourth(int n) {

    for (int i = n; i >= 2; i--) {

        for (int j = 0; j <= n - i; j++) {

            std::cout << " ";

        }

        for  (int k = 1; k <= i; k++) {

            if (k == 1 || k == i) {

                std::cout << n - i + 1 << ' ';

            }
            else std::cout << "  ";

        }

        std::cout << std::endl;

    }

    for (int i = 1; i <= n; i++) {

        for (int j = 0; j <= n - i; j++) {

            std::cout << " ";

        }

        for  (int k = 1; k <= i; k++) {

            if (k == 1 || k == i) {

                std::cout << n - i + 1 << ' ';

            }
            else std::cout << "  ";
            
        }

        std::cout << std::endl;

    }

}

int main() {

    printFirst(6);
    std::cout << "----------------------------" << std::endl;
    printSecond(6);
    std::cout << "----------------------------" << std::endl;
    printThird(6);
    std::cout << "----------------------------" << std::endl;
    printFourth(6);

    return 0;

}
