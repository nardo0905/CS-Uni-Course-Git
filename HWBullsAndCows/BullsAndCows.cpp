#include <iostream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <random>
#include <vector>

int getSecret() {

	// Generate a 4-digit random number without repeating digits
	std::vector<int> digits = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(digits.begin(), digits.end(), g);

	int res = 0;
	for(int i = 0; i < 4; i++) {
		res = 10 * res + digits[i];
	}
	return res;

}

bool play(int secretNum, int guess) {

    if (guess == secretNum) return true;

    int cows = 0, bulls = 0;
    int secretArr[4];
    int guessArr[4];

    for (int i = 0; i < 4; i++) {

        secretArr[i] = secretNum % 10;
        guessArr[i] = guess % 10;

        secretNum /= 10;
        guess /= 10;

    }

    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {

            if (i == j && guessArr[i] == secretArr[j]) {

                bulls++;

            }

            if (i != j && guessArr[i] == secretArr[j]) {

                cows++;

            }

        }

    }

    std::cout << bulls << " бикове и " << cows << " крави." << std::endl;

    return false;

}

int main() {

    int secretNum = getSecret();
    int won = false;
    int guess = 0;
    std::cout << "Тайно число: " << secretNum << std::endl;

    do {

        std::cout << "Предположение: ";
        std::cin >> guess;

        won = play(secretNum, guess);

    } while(!won);

    std::cout << "Спечелихте!" << std::endl;

    return 0;

}
