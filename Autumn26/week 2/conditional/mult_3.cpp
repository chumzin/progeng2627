#include <iostream>

bool is_mult_of_3(int number);

int main(){
    int number;

    std::cout << "please enter a number" << std::endl;
    std::cin >> number; 

    if (is_mult_of_3(number)){
        std::cout << "It is a multiple of 3" << std::endl;
    } else {
        std::cout << "It is not a multiple of 3" << std::endl;
    }
}

bool is_mult_of_3(int number){
    return (number % 3 == 0);
}