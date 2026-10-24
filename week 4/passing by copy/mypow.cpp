#include <iostream>

double mypow(double base, int exp) {
    double result = 1;


    if (exp >= 0){
    for (int i=0; i < exp; i++) {
        result *= base;        
    } 
    } else {
        for (int i=0; i < -exp; i++) {
            result *= base;
        }
        result = 1.0 /result;
    }

    return result;
}

double sop(double base, int iterations) {
    double result = 0;

    for (int i = 1; i < iterations + 1; i++) {
        result += mypow(base, i);
    }

    return result;

}

int main(){
    std::cout << "2^3=" << mypow(2,3) << std::endl;
    std::cout << "0.5^2=" << mypow(0.5,2) << std::endl;
    std::cout << "1^0=" << mypow(1,0) << std::endl;
    std::cout << "4^-2=" << mypow(4,-2) << std::endl;
    std::cout << "sum of powers (sop) test " << sop(3, 5) << std::endl;

}