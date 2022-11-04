#include <iostream>

int main() {

    // Да се напише програма, която да извежда средно аритметичното на n на брой въведени числа.
    int n;

    std::cout << "> ";
    std::cin >> n;

    double sum = 0;
    
    for (int i = 0; i < n; i++) {

        int number;
        std::cin >> number;

        sum += number;

    }

    double average = sum / n;

    std::cout << "Average: " << average << std::endl; 

    return 0;

}
