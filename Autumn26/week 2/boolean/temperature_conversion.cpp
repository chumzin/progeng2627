#include <iostream>

void convert(double input, char unit);

int main(){
    double input;
    char unit;

    std::cin >> input >> unit;
    convert(input, unit);
}

void convert(double input, char unit){
    bool valid = true;
    double out;
    char out_unit;
    if ((unit == 'C') || (unit == 'c')){
        out = (input * 9 /5.0) + 32;
        out_unit = 'F';
    } else if ((unit == 'F') || (unit == 'f')){
        out = (input - 32) * 5 / 9.0;
        out_unit = 'C';
    } else { 
        valid = false;
    }
    if (valid){
        std::cout << out << ' ' << out_unit << std::endl;
    } else {
        std::cout << "error unit not recognised";
    }


}