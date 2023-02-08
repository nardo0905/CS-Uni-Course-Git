#include <iostream>

const int MAX_CAPACITY = 128;
const int town[MAX_CAPACITY][MAX_CAPACITY] = 
        {{1 ,5 ,6 ,4 ,-2},
        {-4, 10, 4, -3, 20},
        {0 ,-4 ,2,-12, 5},
        {5 ,13 ,1 ,1 ,-7},
        {2 ,7 ,5 ,0 ,15}};

bool townVisited[MAX_CAPACITY][MAX_CAPACITY] = {};

void printPath(size_t rows, size_t cols) {

    for (size_t i = 0; i < rows; i++) {

        for (size_t j = 0; j < cols; j++) {

            if (townVisited[i][j]) {
                
                //std::cout << "(" << i << ", " << j << "), ";
                std::cout << "[" << '*' << "]";

            }else{
                std::cout << "[" << ' ' << "]";
            }

        }
        std::cout << std::endl;

    }

    std::cout << std::endl;

}

void foundRouteRec(int homeRow, int homeColumn, int grannyRow, int grannyColumn, int currRow, int currColumn, int maxVolume, int currVolume, bool foundForward, bool &foundBackwards) {

    if (foundForward && foundBackwards) {

        return;

    }

    if (currRow < 0 || currRow >= 5 || currColumn < 0 || currColumn >= 5) {

        return;

    }

    if (townVisited[currRow][currColumn]) return;

    if (foundForward) {

        //printPath(5, 5);

    }

    if (currRow == grannyRow && currColumn == grannyColumn) {

        foundForward = true;
        townVisited[homeRow][homeColumn] = false;
        // printPath(5, 5);
        //return;

    }

    if (foundForward && currRow == homeRow && currColumn == homeColumn) {

        foundBackwards = true;
        printPath(5, 5);
        // printPath(5, 5);
        return;

    }

    if (currVolume + town[currRow][currColumn] > maxVolume || currVolume + town[currRow][currColumn] < 0) {

        return;

    }

    currVolume += town[currRow][currColumn];
    townVisited[currRow][currColumn] = true;

    foundRouteRec(homeRow, homeColumn, grannyRow, grannyColumn, currRow + 1, currColumn, maxVolume, currVolume, foundForward, foundBackwards);
    foundRouteRec(homeRow, homeColumn, grannyRow, grannyColumn, currRow, currColumn + 1, maxVolume, currVolume, foundForward, foundBackwards);
    foundRouteRec(homeRow, homeColumn, grannyRow, grannyColumn, currRow - 1, currColumn, maxVolume, currVolume, foundForward, foundBackwards);
    foundRouteRec(homeRow, homeColumn, grannyRow, grannyColumn, currRow, currColumn - 1, maxVolume, currVolume, foundForward, foundBackwards);

    townVisited[currRow][currColumn] = false;
    // foundForward = false;

}

void foundRoute(int homeRow, int homeColumn, int grannyRow, int grannyColumn, int maxVolume, bool &foundPath) {

    foundRouteRec(homeRow, homeColumn, grannyRow, grannyColumn, homeRow, homeColumn, maxVolume, 0, false, foundPath);

}

int main() {

    bool foundPath = false;

    foundRoute(1, 1, 4, 3, 15, foundPath);

    std::cout << foundPath << std::endl;
    // printPath(5, 5);

    return 0;

}