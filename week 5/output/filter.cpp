#include <vector>
#include <iostream>
void filter_v(const std::vector<double>& vin, int t, std::vector<double>& vout){
    vout.clear();

    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] < t) {
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> v_test{4.3,3.5,6,9.0,10.001, 0.3};
    std::vector<double> v_out;
    std::vector<double> expected_v{0.3};

    filter_v(v_test, 3, v_out);
    std::cout << (expected_v == v_out) << std::endl;

}