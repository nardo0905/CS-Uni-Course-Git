#include <iostream>
#include <cmath>

bool prime(int n) {

    bool isPrime = true;

    if (n == 1) {

        return false;

    }
    if (n == 2) {

        return true;

    }

    for (int i = 2; i <= n; i++) {

        if (i != n && n % i == 0) {

            isPrime = false;
            break;

        }

    }

    return isPrime;

}

int numLength(int n) {

    int length = 0;

    while (n > 0) {

        n /= 10;
        length++;

    }

    return length;

}

void mersennePrime(int k) {

    int exponent = 1;
    int mersenne = 0;
    int number = 0;

    while (numLength(mersenne) <= k) {

        number = pow(2, exponent) - 1;

        if (!prime(number)) {

            exponent++;
            continue;

        }

        mersenne = number;

        std::cout /*<< number << " " */ << mersenne << std::endl;

    }

}


int main() {

    // Напишете прорама, която прочита положително цяло число  и отпечатва всички Мерсенови прости числа с  или по-малко цифри.
    mersennePrime(6);

    return 0;

}
