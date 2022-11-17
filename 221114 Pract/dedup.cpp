#include <iostream>

bool contains(const int * const xs, const size_t n, const int x) {

    for(size_t i = 0; i < n; i++) {

        if(xs[i] == x) {

            return true;

        }

    }

    return false;

}

void swap(int *xs, size_t i, size_t j) {

    if (i != j) {

        const int temp = xs[i];
        xs[i] = xs[j];
        xs[j] = temp;

    }

}

int dedup(int *xs, const size_t size) {

    size_t nUnique = 0;

    for (size_t i = 0; i < size; i++) {

        assert(i >= nUnique);

        if (!contains(xs, nUnique, xs[i])) {

            swap(xs, i, nUnique);
            nUnique++;

        }

    }

    return nUnique;

}

void printArray(const int * const xs, size_t size) {

    for (size_t i = 0; i < size; i++) {

        std::cout << xs[i] << " ";

    }
    std::cout << std::endl;

}

int main() {

    int arr[] = {2, 3, 1, 2, 5 , 3};
    printArray(arr, 6);
    std::cout << dedup(arr, 6) << std::endl;
    printArray(arr, 6);
    

    return 0;

}