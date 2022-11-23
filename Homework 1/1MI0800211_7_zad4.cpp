#include <iostream>

int pow(int base, int exp) {

    int result = 1;

    for (int i = 0; i < exp; i++) {

        result *= base;
        
    }

    return result;

}

int numLength(int num) {

    int length = 0;

    do {

        length++;
        num /= 10;

    } while (num > 0);

    return length;

}

bool hasUniqueDigs(int num) {

    int currDig = 0;
    int firstDigits = 0;

    while (num > 0) {

        currDig = num % 10;
        firstDigits = num / 10;

        while (firstDigits > 0) {

            if (currDig == firstDigits % 10) {

                return false;

            }

            firstDigits /= 10;

        }

        num /= 10;

    }

    return true;

}

// Използвам алгоритъм подобен на този за намиране на всички подмножестжа на дадено множество
int findSum(int num) {

    int sum = 0;
    int numCopy = num;
    int subsetsCount = pow(2, numLength(num));

    int currNum = 0;
    int mask = 1;
    int currI = 0;

    // std::cout << subsetsCount;

    for (int i = 0; i < subsetsCount; i++) {

        currNum = 0;
        mask = 1;
        currI = i;

        while (num > 0) {

            if (currI % 2 == 1) {

                currNum += (mask * (num % 10));
                mask *= 10;

            }

            num /= 10;
            currI /= 2;

        }

        if (hasUniqueDigs(currNum)) {

            // std::cout << currNum << std::endl;
            sum += currNum;

        }

        num = numCopy;

    }

    return sum;

}

int main() {

    int n;
    std::cout << "> ";
    std::cin >> n;

    if (n <= 0) {

        throw "Must be a natural number!";

    }

    std::cout << findSum(n) << std::endl;

    return 0;

}