#include <iostream>

int intervalSum(int n, int m) {

    int sum = 0;

    if (m < n) {

        for (int i = m; i <= n; i++) {

            sum += i;

        }
        
    }
    else {

        sum = 0;

        for (int i = n; i <= m; i++) {

            sum += i;

        }

    }

    return sum;

}

int main() {

    // Да се напише функция която при подадени два параметъра m и n връща сумата на числата в интервала [m, n].
    int n, m;

    try {

        std::cout << "> ";
        std::cin >> m >> n;

        if (m < 0 || n < 0) {

            throw std::exception();

        }

    } catch(std::exception) {

        std::cout << "Invalid input!";
        return 0;

    }

    std::cout << intervalSum(n, m) << std::endl;

    return 0;

}
