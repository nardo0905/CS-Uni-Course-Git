#include <iostream>
#include <cmath>

bool isPrime(int n) {

    if (n <= 1) return false;
    if (n == 2) return true;

    double sqrtN = sqrt(n);

    for (int i = 2; i < sqrtN; i++) {

        if (n % i == 0) return false;

    }

    return true;

}

int numLength(int num) {

    int length = 0;

    while (num > 0) {

        num /= 10;
        length++;

    }

    return length;

}

bool isSpecial(int num) {

    int numCopy = num;
    int length = numLength(num);

    bool suffixSpecial = true;
    bool prefixSpecial = true;

    for (int i = 0; i < length - 1; i++) {

        num /= pow(10, length - i - 1);

        if (!isPrime(num)) {

            prefixSpecial = false;
            break;

        }

        //std::cout << num << " ";
        num = numCopy;

    }

    num = numCopy;

    int currNum = 0;
    int i = 0;
    while (num > 9) {

        currNum = currNum + num % 10 *  pow(10, i);
        num /= 10;
        i++;
        // std::cout << currNum << " ";

        if (!isPrime(currNum)) {

            suffixSpecial = false;
            break;

        }

    }

    return prefixSpecial && suffixSpecial;

}

int main() {

    std::cout << (isSpecial(211112) ? "Special" : "Not special") << std::endl;

    return 0;

}