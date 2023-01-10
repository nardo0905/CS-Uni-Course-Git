#include <iostream>
#include <cstring>
#pragma warning(disable: 4996)

int PATHCOUNT = 0;
const int ROWCOUNT = 5;
const int COLCOUNT = 8;

int getValue(char ch)
{

    int currValue;

    if (ch == 'S')
    {

        currValue = 'a';
    }
    else if (ch == 'E')
    {

        currValue = 'z';
    }
    else
    {

        currValue = ch;
    }

    return currValue;
}

// A)
void findPath(char (*mountain)[COLCOUNT], int currX, int currY, bool (*visited)[COLCOUNT], int **path, char* pathStr, int pathLength, int &shortestPathLen, char* shortestPathString)
{

    if (currX < 0 || currY < 0 || currX > ROWCOUNT - 1 || currY > COLCOUNT - 1)
    {
        return;
    }

    int currValue = getValue(mountain[currX][currY]);
    if (pathLength > 0)
    {

        int prevX = path[pathLength - 1][0];
        int prevY = path[pathLength - 1][1];
        int prevValue = getValue(mountain[prevX][prevY]);

        if (currValue != prevValue + 1 && currValue != prevValue - 1 && currValue != prevValue)
        {

            return;

        }
    }

    if (mountain[currX][currY] == 'E')
    {

        path[pathLength][0] = currX;
        path[pathLength][1] = currY;
        pathStr[pathLength] = mountain[currX][currY];
        PATHCOUNT++;

        if (pathLength + 1 < shortestPathLen) {

            shortestPathLen = pathLength + 1;
            strcpy(shortestPathString, pathStr);

        }

        for (int i = 0; i < shortestPathLen; i++) {

            if (shortestPathString[i] == 'E') {

                shortestPathString[i + 1] = '\0';
                break;

            }

        }

        return;

    }

    visited[currX][currY] = 1;
    path[pathLength][0] = currX;
    path[pathLength][1] = currY;
    pathStr[pathLength] = mountain[currX][currY];

    if (!visited[currX + 1][currY])
    {

        findPath(mountain, currX + 1, currY, visited, path, pathStr, pathLength + 1, shortestPathLen, shortestPathString);

    }
    if (!visited[currX - 1][currY])
    {

        findPath(mountain, currX - 1, currY, visited, path, pathStr, pathLength + 1, shortestPathLen, shortestPathString);

    }
    if (!visited[currX][currY + 1])
    {

        findPath(mountain, currX, currY + 1, visited, path, pathStr, pathLength + 1, shortestPathLen, shortestPathString);

    }
    if (!visited[currX][currY - 1])
    {

        findPath(mountain, currX, currY - 1, visited, path, pathStr, pathLength + 1, shortestPathLen, shortestPathString);

    }

    visited[currX][currY] = 0;

}

// Б)
void shortestPathFromA(char (*mountain)[COLCOUNT]) {

    char absShortestPath[150];
    int absShortestLen = 1000;

    for (int i = 0; i < ROWCOUNT; i++) {

        for (int j = 0; j < COLCOUNT; j++) {

            if (mountain[i][j] == 'a') {

                char shortestPath[150];
                char pathStr[150];
                int shortestPathLen = 1000;
                bool visited[ROWCOUNT][COLCOUNT] = {};

                size_t size = ROWCOUNT * COLCOUNT;
                int **currPath = new int *[size];

                for (size_t k = 0; k < size; k++)
                {

                    currPath[k] = new int[2];
                    currPath[k][0] = 0;
                    currPath[k][1] = 0;

                }

                findPath(mountain, i, j, visited, currPath, pathStr, 0, shortestPathLen, shortestPath);

                for (size_t l = 0; l < size; l++)
                {           

                    delete [] currPath[l];
                }

                delete [] currPath;

                if (shortestPathLen < absShortestLen) {

                    strcpy(absShortestPath, shortestPath);
                    absShortestLen = shortestPathLen;
                    
                }

            }

        }

    }

    std::cout << absShortestLen << ' ' << absShortestPath << std::endl;
    
}

int main()
{

    char mountain[ROWCOUNT][COLCOUNT] = {

        {'S', 'a', 'b', 'q', 'p', 'o', 'n', 'm'},
        {'a', 'b', 'c', 'r', 'y', 'x', 'x', 'l'},
        {'a', 'c', 'c', 's', 'z', 'E', 'x', 'k'},
        {'a', 'c', 'c', 't', 'u', 'v', 'w', 'j'},
        {'a', 'b', 'd', 'e', 'f', 'g', 'h', 'i'}

    };

    char mountain2[ROWCOUNT][COLCOUNT] = {

        {'a', 'a', 'b', 'q', 'p', 'o', 'n', 'm'},
        {'a', 'b', 'c', 'r', 'y', 'x', 'x', 'l'},
        {'a', 'c', 'c', 's', 'z', 'E', 'x', 'k'},
        {'a', 'c', 'c', 't', 'u', 'v', 'w', 'j'},
        {'a', 'b', 'd', 'e', 'f', 'g', 'h', 'i'}

    };

    int startY = 0;
    int startX = 0;

    for (size_t i = 0; i < ROWCOUNT; i++) {

        for (size_t j = 0; j < COLCOUNT; j++) {

            if (mountain[i][j] == 'S') {

                startX = i;
                startY = j;

            }

        }

    }

    bool visited[ROWCOUNT][COLCOUNT] = {};

    size_t size = ROWCOUNT * COLCOUNT;
    int **currPath = new int *[size];

    for (size_t i = 0; i < size; i++)
    {

        currPath[i] = new int[2];
        currPath[i][0] = 0;
        currPath[i][1] = 0;

    }

    int shortestPathLength = INT_MAX;
    char* shortestPathString = new char[shortestPathLength];
    char* path = new char[INT_MAX];

    findPath(mountain, startX, startY, visited, currPath, path, 0, shortestPathLength, shortestPathString);

    if (shortestPathLength == 0) {

        std::cerr << "No shortest path found!" << std::endl;
        return 1;

    }

    std::cout << shortestPathLength << std::endl;
    // std::cout << shortestPathString << std::endl;

    shortestPathFromA(mountain2);

    for (size_t i = 0; i < size; i++)
    {

        delete[] currPath[i];
    }

    delete [] shortestPathString;
    delete [] path;
    delete [] currPath;

    return 0;
}
