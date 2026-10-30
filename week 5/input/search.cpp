#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin) {
    int idx = -1;

    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] == n) {
            return i;
        }
    }

    return idx;
}

int main(){
    std::vector<int> v{1,2,3,4};
    std::cout << (search_vector(1, v) == 0) << std::endl;
    std::cout << (search_vector(9, v) == -1) << std::endl;
    std::vector<int> v2{9,9,9,9};
    std::cout << (search_vector(9, v2) == 0) << std::endl;
    
    
}