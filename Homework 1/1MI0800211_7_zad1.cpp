#include <iostream>

int numSize (int n) {

    int size = 0;

    while (n > 0) {

        size++;
        n /= 10;
        
    }

    return size;

}

bool containsDig(int num, int dig) {

    bool found = false;

    while (num > 0) {

        int currNum = num % 10;

        if (currNum == dig) {

            found = true;

        }

        num /= 10;

    }

    return found;

}

int compare(int num1, int num2) {

    int countDif = 0;

    while (num1 > 0) {

        int currNum1 = num1 % 10;

        if (containsDig(num2, currNum1)) {

            num1 /= 10;
            continue;

        }

        num1 /= 10;
        countDif++;
    
    }

    return countDif;

}

void solve(int n, int k) {

    int sizeN = compare(n, k);
    int sizeK = compare(k, n);

    std::cout << sizeN << " " << sizeK << std::endl;

    if (sizeN == 0 && sizeK != 0) {

        std::cout << "First is weaker" << std::endl;

    }
    else if (sizeK == 0 && sizeN != 0) {

        std::cout << "Second is weaker" << std::endl;

    }
    else if (sizeN > 0 && sizeK > 0) {

        std::cout << "Not comparable" << std::endl;

    }
    else {

        std::cout << "Equal strength" << std::endl;

    }

}

int main() {

    int n, k;
    std::cin >> n >> k;

    solve(abs(n), abs(k));

    return 0;

}