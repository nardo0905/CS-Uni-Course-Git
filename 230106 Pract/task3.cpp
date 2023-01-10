#include <iostream>

bool isPrimeRec(int num, int currCheck) {

    if (num == 1) return false;
    if (num % currCheck == 0) return false;

    isPrimeRec(num, currCheck + 1);

    return true;

}

bool isPrime(int num) {

    return isPrimeRec(num, 2);

}

int main() {

    std::cout << isPrime(6);

    return 0;

}