#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    //Generate a random number beween 1 and 100
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    
    int guess;
    int attempts = 0;
    
    std::cout << "Welcome to the Number Gussing Game!" << std::endl;
    
    do{
        std::cout << "Enter your guess (1-100): ";
        std::cin >> guess;
            
        attempts++;
            
        if(guess > randomNumber) {
            std::cout << "Too high! Try again." <<std::endl;
        } else if (guess < randomNumber) {
            std::cout << "Too low Try again." <<std::endl;
        }else {
            std::cout <<"congratulation! You guessed the number in " <<attempts << " attempts." <<std::endl;
        }
    }while (guess != randomNumber);
    
    return 0;
}