#include <iostream>

int main() {

    // Напишете програма, която при дадено число n определя броя на числата в интервала [1, n], които се делят на 3 или на 5. (Числата могат да се делят и на двете едновременно.)
    int n;

    std::cout << "Enter number N: ";
    std::cin >> n;

    int count = 0;

    if (n % 3 == 0) {

        count = (n / 3) - (1 / 3) + 1;

    }
    else {

        count = (n / 3) - (1 / 3);

    }

    if (n % 5 == 0) {

        count += (n / 5) - (1 / 5) + 1;

    }
    else {

        count += (n / 5) - (1 / 5);

    }

    std::cout << "Count of numbers divisible by 3 or 5 in the range: " << count << std::endl;

    return 0;

}
