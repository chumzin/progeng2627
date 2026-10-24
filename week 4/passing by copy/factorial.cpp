#include <iostream>

int myfactorial(int n) {
    int fact = 1;

    for (int i = 2; i < n + 1; i++) {
        fact *= i;
    }
    return fact;
}


int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}