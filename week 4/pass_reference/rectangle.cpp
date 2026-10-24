#include <iostream>

void perimeter(double a, double b, double& result) {
    result = 2 * (a + b);
}

void area(double a, double b, double& result) {
    result = a*b;
}

int main(){
    double a, b;
    double rect_a, rect_p;

    std::cin >> a >> b;

    area(a, b, rect_a);
    perimeter(a, b, rect_p);

    std::cout << rect_a << std::endl;
    std::cout << rect_p << std::endl;
}