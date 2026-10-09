#include <iostream>

int main(){
    double n, sum, counter = 1;
    double avg;

    std::cout << "Enter a number" << std::endl;
    std::cin >> n;

    while (n!= 0){
        sum += n;
        avg = sum / counter;
        std::cout << "The avg so far is: \n" << avg << std::endl;
        std::cout << "Enter a number" << std::endl;
        std::cin >> n;    
        counter++;
    }


}