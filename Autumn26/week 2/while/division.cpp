#include <iostream>

int main(){
    int a,b;

    std::cin >> a >> b;

    int quotient = 0, remainder;

    while (a > b){
        a = a - b;
        quotient++;
    }
    remainder = a;

    std::cout << "Quotient is "<< quotient << std::endl;
    std::cout << "Remainder is " << remainder << std::endl;
}