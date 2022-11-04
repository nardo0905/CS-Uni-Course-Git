#include <iostream>
#include <cmath>

int main() {

    // Проверете дали въведено число n е палиндром
    int n;

    std::cout << "> ";
    std::cin >> n;

    bool isPalindrome = true;
    int numLength = 0;
    int nCopy = n;

    while (n > 0) {

        numLength++;
        n /= 10;

    }
    
    n = nCopy;

    while (n > 0) {

        int last = n % 10;
        int first = n / (int)pow(10, numLength - 1);

        std::cout << first << " " << last << std::endl;

        if (last != first) {

            isPalindrome = false;
            break;

        }

        n %= (int)pow(10, numLength - 1);
        n /= 10;        
        numLength -= 2;

    }

    std::cout << ((isPalindrome) ? "Palindrome" : "Not a palindrome") << std::endl;

    return 0;

}
