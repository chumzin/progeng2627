#include <iostream>
/*Includes the header iostream
(input output stream)
headers are often needed in addition to the core language
in this case, iostream is used to perform input output*/


int main(){
    /*defines a function called main
    always have main()*/
    std::cout << "ih" << std::endl;
    /*reading right to left
    std::endl denotes endline 
    << denotes printed
    the text "ih"
    is printed (<<  )
    on std::cout*/

    /*cout stands for console output 
    and it represents the screen*/

    /*end stuff with ;*/
    double n1 = 1;
    double n2 = 2;
    std::cout << n1 << n2 << std::endl;
    n1 = n1 + n1;
    std::cout << n1 << n2 << std::endl;
    n2 = 1 + n1;
    std::cout << n1 << n2 << std::endl;
    n1 = n2 - n1;
    std::cout << n1 << n2 << std::endl;
    n2 = n2 + 2;
    std::cout << n1 << n2 << std::endl;
    n1 = n1 * n1 - n2;
    std::cout << n1 << n2 << std::endl;
    n1 = n2 - 3;
    std::cout << n2 << std::endl;
}