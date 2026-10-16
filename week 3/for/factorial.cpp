#include <iostream>

int main(){
    int n;
    int result = 1;

    std::cout << "Enter the number" << std::endl;
    std::cin >> n;

    for (int i = n; i != 0; i--) {
        result *= i;
    }

    std::cout << "The factorial is " << result << std::endl;
}