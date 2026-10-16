#include <iostream>

void print(int n){
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            std::cout << i*j << "\t";
        }
        std::cout << std::endl;
    }
}

int main(){
    int n;
    std::cin >> n;

    print(n);
}