#include <iostream>

const size_t MAX_SIZE = 1024;

unsigned traversePath(char colours[MAX_SIZE], size_t size, unsigned index) {

    unsigned pathLength = 0;
    bool yellowBuff = false;

    for (size_t i = index; i < size; i++) {

        switch (colours[i])
        {
        case 'g':
            
            if (i + 1 == size) return pathLength;
            yellowBuff = false;

            break;

        case 'y':

            yellowBuff = true;

            break;

        case 'r':

            if (yellowBuff) continue;
            return pathLength; 
        
        default:
            break;
        }

        pathLength++;

    }

    if (yellowBuff) pathLength -= 1;

    return pathLength;

}

unsigned findLongestPath(char colours[MAX_SIZE], size_t size) {

    unsigned currLongestPath = 0;

    for (size_t i = 0; i < size; i++) {

        unsigned currPath = traversePath(colours, size, i);

        if (currPath > currLongestPath) currLongestPath = currPath;

    }

    return currLongestPath;

}

int main() {

    char colours[MAX_SIZE];

    size_t size;

    do {

        std::cout << "Enter size: ";
        std::cin >> size;

    } while (size <= 0);

    for (size_t i = 0; i < size; i++) {

        char colour;
        std::cin >> colour;

        if (colour != 'g' && colour != 'y' && colour != 'r') {

            std::cerr << "Must input a valid colour!" << std::endl;
            return -1;

        }

        colours[i] = colour;

    }

    std::cout << findLongestPath(colours, size) << std::endl;

    return 0;

}