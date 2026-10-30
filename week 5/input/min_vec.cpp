#include <climits>
#include <iostream>
#include <vector>

int min_vec_elm(const std::vector<int>& vin) {
    int tmp_min = INT_MAX;
    int min_idx = -1;

    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] < tmp_min) {
            tmp_min = vin[i];
            min_idx = i;
        }
    }

    return min_idx;

}

int main(){
    std::vector<int> v{1,2,3,4};
    std::cout << (min_vec_elm(v) == 0) << std::endl;
    std::vector<int> v2{1,-2,3,4};
    std::cout << (min_vec_elm(v2) == 1) << std::endl;
    std::vector<int> v3{};
    std::cout << (min_vec_elm(v3) == -1) << std::endl;


}