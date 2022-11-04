#include <iostream>

int main() {

    // Намерете n-тото число на Фибоначи
    int n;

    std::cout << "> ";
    std::cin >> n;

    int n1 = 0;
    int n2 = 1;
    int n3 = 0;

    for (int i = 0; i < n; i++) {

        int temp = n2;
        n1 = n2 + n3;
        n2 = n1;
        n3 = temp;
        
    }

    std::cout << n << " number of Fibonacci is: " << n1 << std::endl;

    return 0;

}
