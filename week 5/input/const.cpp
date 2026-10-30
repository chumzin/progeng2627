#include <iostream>
#include <vector>

// note: const before std::vector<double>
// and the & afterwards

double sum_vector(const std::vector<double>& vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    vin.push_back(4); //const.cpp:15:18: error: passing ‘const std::vector<double>’ as ‘this’ argument discards qualifiers [-fpermissive]

    return sum;

}

int main(){
    std::vector<double> v;

    v.push_back(3);
    v.push_back(0.5);
    v.push_back(-1);

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}