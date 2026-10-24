#include <iostream>

int main(){
    int n1, n2;
    std::cout << "please enter 2 values" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered " << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    int tmp;

    tmp = n1;
    n1 = n2;
    n2 = tmp;

    std::cout << "after swapping" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    
}