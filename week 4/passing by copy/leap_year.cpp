#include <iostream>

bool leap_year(int year) {
    bool ly = false;

    if ((year % 4 == 0)){
        if (year % 400 == 0) {
            ly = true;
        } else if (year % 100 != 0) {
            ly = !ly;
        }
    }
    return ly;
}

int main(){
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(2000) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(1800) == false) << std::endl;
    std::cout << (leap_year(1900) == false) << std::endl;
    std::cout << (leap_year(3000) == false) << std::endl;
    std::cout << (leap_year(2400) == true) << std::endl;
}