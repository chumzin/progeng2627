#include <iostream>
#include <cmath>

bool is_triangle(double a, double b, double c){
    return (a + b > c) && (b + c > a) && (a + c > b);
}

void type_of_triangle(double a, double b, double c) { 
    std::cout << "It's a";
    if ((a==b) && (b == c)){
        std::cout << "n equilateral triangle" << std::endl;
    } else if ((a==b) || (b==c) || (a==c)) {
        std::cout << "n isosceles triangle" << std::endl;
    } else {
        std::cout << " scalene triangle" << std::endl;
    }
}

double perimeter(double a, double b, double c) {
    return a + b + c;
}

double area(double a, double b, double c) { 
    double s = perimeter(a, b, c) / 2;
    return std::sqrt(s * (s-a) * (s-b) * (s-c));
}

int main(){
    double a, b, c;
    std::cout << "Enter side lengths" << std::endl;
    std::cin >> a >> b >> c;

    if (is_triangle(a, b, c)) {
        type_of_triangle(a, b, c);
        std::cout << "The perimeter is " << perimeter(a, b, c) << std::endl;
        std::cout << "The area is " << area(a, b, c) << std::endl;
    } else {
        std::cout << "It's not a triangle!!!!!" << std::endl;
    }
}