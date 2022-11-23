#include <iostream>

int main() {

    int size = 10;

    int** arr = new int*[size];

    for (int i = 0; i < size; i++) {

        arr[i] = new int;
        *arr[i] = i;

    }

    for (int i = 0; i < size; i++) {

        std::cout << *arr[i] << " ";

    }

    for (int i = 0; i < size; i++) {

        delete arr[i];

    }

    delete [] arr;

    return 0;

}