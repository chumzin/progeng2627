#include <climits>
#include <iostream>

int main(){
    int n, current_max = INT_MIN, current_min = INT_MAX;
    std::cout << "Enter a number" << std::endl;
    std::cin >> n;

    while (n != 0){
        if (n>current_max){
            current_max = n;
        } 
        if (n < current_min){
            current_min = n;
        }
        std::cout << "Current max is:" << std::endl << current_max << std::endl;
        std::cout << "Current min is:" << std::endl << current_min << std::endl;
        std::cout << "Enter a number" << std::endl;
        std::cin >> n;
    }
}