#include <iostream>

double convert_to_euro(double gbp, double rate);

int main(){
    double gbp_amount, rate;

    std::cout << "What is the current rate of conversion (how much is 1 GBP in EUR)?" << std::endl;
    std::cin >> rate;

    std::cout << "How much GBP to convert?" << std::endl;
    std::cin >> gbp_amount;

    std::cout << gbp_amount << " is equivalent to " << convert_to_euro(gbp_amount, rate) << "EUR" << std::endl;
}

double convert_to_euro(double gbp, double rate){
    return gbp * rate;
}