#include <iostream>
#include <cmath>

int main() {

    // Да се напише програма, която по въведено в бинарен вид (без водещи нули) число n, пресмята и го извежда в десетичен вид.
    int n;

    std::cout << "> ";
    std::cin >> n;

    int numInDecimal = 0;
    int count = 0;

    while (n > 0) {

        numInDecimal += n % 10 * pow(2, count);
        count++;
        n /= 10;

    }

    std::cout << "Number in decimal format: " << numInDecimal << std::endl;

    return 0;

}
