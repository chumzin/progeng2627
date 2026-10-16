#include <iostream>

int main(){
    int x,n;
    int result = 1;

    std::cout << "Input x and n" << std::endl;
    std::cin >> x >> n;

    for (int i = 0; i<n; i++) {
        result *= x;
    }

    std::cout << x << "^" << n << "=" << result << std::endl;
}