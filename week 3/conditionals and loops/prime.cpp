#include <cmath>
#include <iostream>

bool found_prime(int n){
    for (int i = 2; i < std::ceil(std::sqrt(n))+1; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    
    std::cout << "Please enter an integer above 1 to determine if its prime" << std::endl;
    std::cin >> n;

    if (found_prime(n)) {
        std::cout << "It's prime!" << std::endl;
    } else {
        std::cout << "It's not prime!" << std::endl;
    }
}