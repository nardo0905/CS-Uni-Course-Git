#include <iostream>

int main() {

    // Да се напише програма, която по въведено положително число n извежда всяко трето число:

    // от 1 до n включително (Например: n = 10 -> 4, 7, 10)
    // от подадено m до n включително (Например: m = 2, n = 10 -> 5, 8)
    int n;

    std::cout << "Enter 1 number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i += 3) {

        if (i == 1) continue;

        std::cout << i << " ";

    }

    std::cout << std::endl;

    int m;

    std::cout << "Enter a second number: ";
    std::cin >> m;

    for (int i = m; i <= n; i += 3) {

        if (i == m) continue;

        std::cout << i << " ";

    }
    
    std::cout << std::endl;

    return 0;

}
