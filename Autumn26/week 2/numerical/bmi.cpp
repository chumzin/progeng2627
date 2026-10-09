#include <iostream>

double calc_bmi(double height, double weight);

int main(){
    double height, weight;

    std::cout << "What is your height in metres " << std::endl;
    std::cin >> height;

    std::cout << "What is your weight in kilograms" << std::endl;
    std::cin >> weight;

    std::cout << "Your BMI is " << calc_bmi(height, weight) << std::endl;
}

double calc_bmi(double height, double weight){
    return (weight) / (height * height);
}

