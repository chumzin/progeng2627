#include <iostream>

int smallest_factor(int n){
    for (int cf = 2; cf < n; cf++){
        if (n%cf == 0) {
            return cf;
        }
    }
    return n;
}



int main(){
    int a,b;

    std::cin >> a >> b;

    for (int i = a; i < b+1; i++) {
        int tmp = smallest_factor(i);
        if (tmp == i) {
            std::cout << i << std::endl;
        }

    }

}
