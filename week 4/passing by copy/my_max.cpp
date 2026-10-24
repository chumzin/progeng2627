#include <iostream>

double my_max(double a, double b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

double three_max(double a, double b, double c) {
    if ((my_max(a, b) == my_max(a, c))) {
        return a;
    } else if (my_max(a, b) == my_max(b, c)) {
        return b;
    } else {
        return c;
    }
}

int main(){
    //double n1, n2;
    double n1, n2, n3;
    //std::cout << "Enter 2 numbers" << std::endl;
    std::cout << "Enter 3 numbers" << std::endl;
    std::cin >> n1 >> n2 >> n3;

    std::cout << three_max(n1, n2, n3) << std::endl;
}