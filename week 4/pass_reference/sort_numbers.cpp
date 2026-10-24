#include <iostream> 

void myswap(double& n1, double& n2) {
    double tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void sort_two_numbers(double& s1, double& s2) {
    // basically makes it so s2 > s1
    if (s1 > s2) {
        myswap(s1, s2);
    }
}

void sort_three_numbers(double& s1, double& s2, double& s3) {
    // basically makes it so s3 >= s2 >= s1
    if (s1 > s2) {
        myswap(s1, s2);
    }
    if (s2 > s3) {
        myswap(s2, s3);
    }
    if (s1 > s2) {
        myswap(s1, s2);
    }

}

int main(){
    double n1, n2, n3;
    std::cout << "please enter tree numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    //sort_two_numbers(n1, n2);
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}