#include <iostream>

int main() {

    // От клавиатурата се въвеждат n реални числа (1 <= n <= 1000), намерете и изкарайте най-малкото и най-голямото от тях. (Без употребата на масив)
    int n;

    std::cout << "> ";
    std::cin >> n;

    int biggest = 0;
    int smallest = 99999;

    for (int i = 0; i < n; i++) {

        int number;
        std::cin >> number;

        if (number > biggest) {

            biggest = number;

        }
        if (number < smallest) {

            smallest = number;

        }

    }

    std::cout << "Smallest number: " << smallest << ", biggest number: " << biggest << std::endl;

    return 0;

}
