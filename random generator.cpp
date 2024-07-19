#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int num, randomnum;
    srand(time(0));
    randomnum = rand() % 100 + 1;
    std::cout << "Guess a number between 1 to 100\n";
    
    do {
        std::cout << "Enter a number: ";
        std::cin >> num;
        
        if (num < randomnum) {
            std::cout << "Too low, try again\n";
        } else if (num > randomnum) {
            std::cout << "Too high, try again\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomnum << "\n";
        }
    } while (num != randomnum);

    return 0;
}

