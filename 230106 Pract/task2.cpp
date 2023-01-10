#include <iostream>

void reverseNum(int num) {

    if (num == 0) {

        return;

    }

    int currDig = num % 10;
    std::cout << currDig;
    reverseNum(num / 10);
    
}

int main() {

    reverseNum(712314);

    return 0;

}