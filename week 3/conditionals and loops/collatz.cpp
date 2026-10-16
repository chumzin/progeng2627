#include <iostream>

bool is_even(int n) { 
    return n % 2 == 0;
}

int main(){
    int n; // starting number
    int counter = 0;

    std::cin >> n;
    int max = n;

    if (n==1){
        std::cout << n << std::endl;
    }

    std::cout << n << " ";

    while (n!= 1){
        if (is_even(n)){
            n = n / 2;
        } else {
            n = 3*n + 1;    
        }
        if (n>max){
            max = n;
        }
        counter++;
        std::cout << n << " ";
    }
    std::cout << "It took " << counter << " steps" << std::endl;
    std::cout << "The largest value was " << max << std::endl;
}