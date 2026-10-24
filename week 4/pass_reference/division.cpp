#include <iostream>

void division(int a, int b, int& q, int& r) {
    q = a / b;
    r = a % b;
}

int main() { 
    int a, b;
    int quot, remainder;

    std::cin >> a >> b;
    
    division(a, b, quot, remainder);

    std::cout << "Quotient: " << quot << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;
}