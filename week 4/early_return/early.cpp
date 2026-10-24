#include <iostream>

int f(){
    std::cout << "this is f" << std::endl;
    return 1;
    std::cout << "printing after return 1" << std::endl;
    return 2;
    std::cout << "printing after return 2" << std::endl;
    
}

int main(){
    int n=0;
    n = f();
    std::cout << "n is " << n << std::endl; // n should be 1
}