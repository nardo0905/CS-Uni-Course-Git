#include <iostream>

int main() {

    // Да се напише програма, която по въведени числа n и k (приема се, че ни се подава коректно k > 0, k <= броя на цифрите на n) извежда на екрана:

    // k-тата цифра отдясно наляво на n
    // k-тата цифра отляво надясно на n
    int n, k;

    std::cout << "> ";
    std::cin >> n >> k;

    int nCopy =  n;
    int numSize = 0;
    int leftCount = 1;

    while (n > 0) {

        numSize++;

        if (leftCount == k) {

            std::cout << n % 10 << std::endl;

        }

        n /= 10;
        leftCount++;

    }

    while (nCopy > 0) {

        if (numSize == k) {

            std::cout << nCopy % 10 << std::endl;

        }

        nCopy /= 10;
        numSize--;

    }

    return 0;

}
