#include <iostream>

double c_to_f(double c);

int main(){
    double c;

    std::cout << "Enter the temperature in C" << std::endl;
    std::cin >> c;

    std::cout << "It is " << c_to_f(c) << " F" << std::endl; 
}

double c_to_f(double c){
    return (c * 9 / 5.0) + 32;
}