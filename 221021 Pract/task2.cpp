#include <iostream>

int main () {

    // Да се напише програма, която по въведено число n, намира числото съставено от цифрите му в обратен ред.
    int n;
    int newN = 0;

    std::cout << "> ";
    std::cin >> n;

    while (n > 0) {

        newN += (n % 10);
        newN *= 10;
        n /= 10;

    }
    
    newN /= 10;

    std::cout << newN << std::endl;

    return 0;

}
