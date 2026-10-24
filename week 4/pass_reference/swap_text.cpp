#include <iostream>
#include <string>

void swap(std::string& a, std::string& b) {
    std::string tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main() {
    std::string one, two;

    std::cout << "Please enter string 1" << std::endl;
    std::cin >> one;

    std::cout << "Please enter string 2" << std::endl;
    std::cin >> two;

    swap(one, two);

    std::cout << "New string 1" << std::endl << one << std::endl;
    std::cout << "New string 2" << std::endl << two << std::endl;
}