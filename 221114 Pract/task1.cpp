#include <iostream>
#include <cmath>

bool isPrime (int n) {

    if (n <= 1) return false;
    if (n == 2) return true;

    double sqrtN = sqrt(n);

    for (int i = 2; i < sqrtN; i++) {

        if (n % i == 0) return false;

    }

    return true;

}

void solve(int num) {

    int currNum = 2;
    //std::cout << currNum;

    while (num > 0) {

        if (isPrime(currNum)) {

            while (num % currNum == 0) {

                std::cout << currNum << " ";
                num /= currNum;

            }
            currNum++;

        }
        if (!isPrime(currNum)) {

            currNum++;

        }

    }

}

int main() {

    //std::cout << "sjdjflkjsdjfsd";
    //std::cout << isPrime(3);
    solve(9);

    return 0;

}
