#include <iostream>

int main(){
    double n, abs_val;

    std::cout << "Enter the number to take the absolute value of" << std::endl; 
    std::cin >> n;

    if (n<0){
        abs_val = -n;
    } else {
        abs_val = n;
    }

    std::cout << "|" << n << "| = " << abs_val << std::endl; 
}