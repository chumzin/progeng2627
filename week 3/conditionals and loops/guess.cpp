#include <climits>
#include <iostream>
#include <string>

int next_guess(int lb, int ub){
    return (lb+ub) / 2;
}

int main(){
    int lb = INT_MIN;
    int ub = INT_MAX;
    std::string feedback;
    bool found = false;
    while (!found) { 
        int guess = next_guess(lb, ub);
        std::cout << "Is your number " << guess << std::endl;
        std::cin >> feedback;
        
        if (feedback == "yes") {
            found = true;
            std::cout << "Great!" << std::endl;
        } else {

            std::cout << "Is your number higher or lower than " << guess << std::endl;
            std::cin >> feedback;
            if (feedback == "higher") {
                lb = guess;
            } else {
                ub = guess;
            }
        }
    }
}