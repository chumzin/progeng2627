#include <iostream>

double calculate_area(double a, double b){
    return a*b;
}

double calculate_perimeter(double a, double b){
    return 2*(a+b);
}

int main(){
    double side_1, side_2;

    std::cout << "Enter one of the lengths of the rectangle" << std::endl;
    std::cin >> side_1;

    std::cout << "Enter the length of the other side of the rectangle" << std::endl;
    std::cin >> side_2;

    std::cout << "The perimeter is " << calculate_perimeter(side_1, side_2) << std::endl;
    std::cout << "The area is " << calculate_area(side_1, side_2) << std::endl;
}