#include <iostream>

void bidimensional(int n){
    int i = 0, j = 0;
    while (i < n){
        while (j< n){
            std::cout << "*";
            j++;
        }
        j = 0;
        std::cout << std::endl;
        i++;
    }
}

int main(){
    int n;
    std::cin >> n;
    bidimensional(n);
}