#include <iostream>

int GCD(int n, int m) { //implement SCD

    if (m == 0) {

        throw "You can't divide by 0!";

    }

    if (m > n) {

        int temp = n;
        n = m;
        m = temp;

    }

    while (m > 0) {

        int reminder = n % m;
        n = m;
        m = reminder;
        
    }

    return n;

}

int main() {

    // Използвайки предната функция, намерете най-малкото общо кратно.
    int n, m;

    return 0;

}