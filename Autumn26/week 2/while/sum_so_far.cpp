#include <iostream>

int main(){
    int n, sum;

    std::cout << "Enter a number" << std::endl;
    std::cin >> n;

    while (n!= 0){
        sum += n;
        std::cout << "The sum so far is: \n" << sum << std::endl;
        std::cout << "Enter a number" << std::endl;
        std::cin >> n;    
    }


}