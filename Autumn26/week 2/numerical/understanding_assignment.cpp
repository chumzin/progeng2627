#include <iostream>

int main(){
    double a,b,c;

    a=1;
    b=2;
    c = a + b;

    std::cout << c << std::endl; 
    // this prints 3 

    a = 2;
    std ::cout << c << std::endl;
    // since the value of c was not updated, this should still output 3

    c = a + b; 
    std::cout << c << std::endl;
    // c is now updated so it is 2+2 (4)
}