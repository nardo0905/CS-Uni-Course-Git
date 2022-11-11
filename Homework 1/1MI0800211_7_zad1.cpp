#include <iostream>

int numSize (int n) {

    int size = 0;

    while (n > 0) {

        n /= 10;
        size++;

    }

    return size;

}

void solve(int n, int k) {

    int nSize = numSize(n);
    int kSize = numSize(k);
    bool found = false;
    int nCopy = n;
    int itteration = 0;

    

}

int main() {

    int n, k;
    //std::cout << "Enter two numbers: ";
    std::cin >> n >> k;



    return 0;

}