#include <iostream>

const char SYMBOLS[4] = {'\\', '*', '-', '#'}; //sunray, hit by sunray, shadow, not hit by sunray

// подточка А)
int getSunFloors(int* street, size_t size) {

    int* shadows = new int[size];
    int sunFloors = 0;
    shadows[0] = street[0];

    for (size_t i = 0; i < size - 1; i++) {

        if (shadows[i] < 0) return 0;

        if (street[i] > street[i + 1] || street[i + 1] == 0) {

            shadows[i + 1] = shadows[i] - 1;

        }
        else {

            shadows[i + 1] = street[i + 1];

        }

    }

    for (size_t i = 1; i < size; i++) {

        int currLit = street[i] - shadows[i - 1];
        
        if (currLit > 0) {

            sunFloors += currLit;

        }
        
    }

    delete [] shadows;
    return sunFloors;

}

int getTallestBuilding(int * street, size_t size) {

    int tallest = 0;

    for (size_t i = 0; i < size; i++) {

        if (street[i] > tallest) {

            tallest = street[i];

        }

    }

    return tallest;

}

// подточка Б)
void printPicture(int* street, size_t size) {

    size_t height = getTallestBuilding(street, size) + 1;

    int* shadows = new int[size];
    shadows[0] = street[0];
    for (size_t i = 0; i < size - 1; i++) {

        if (shadows[i] < 0) {
            
            shadows[i + 1] = 0;

        }

        if (street[i] > street[i + 1] || street[i + 1] == 0) {

            shadows[i + 1] = shadows[i] - 1;

        }
        else {

            shadows[i + 1] = street[i + 1];

        }

    }

    for (size_t i = 0; i < height; i++) {

        for (size_t j = 0; j < size; j++) {

            int currHeight = height - i;

            if (street[j] >= currHeight) {

                if (j > 0 && street[j] > shadows[j - 1]) {

                    street[j]--;
                    std::cout << SYMBOLS[1];

                }
                else {

                    std::cout << SYMBOLS[3];

                }

            }
            else {

                if (shadows[j] >= currHeight) {

                    std::cout << SYMBOLS[2];

                }
                else {

                    std::cout << SYMBOLS[0];

                }

            }

        }

        std::cout << std::endl;

    }

    delete [] shadows;

}

int main() {

    size_t n;
    std::cin >> n;

    int* street = new int[n];

    for (size_t i = 0; i < n; i++) {

        int size;
        std::cin >> size;
        street[i] = size;

    }

    std::cout << getSunFloors(street, n) << std::endl;
    printPicture(street, n);

    delete[] street;

    return 0;

}