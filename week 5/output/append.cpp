#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& vout) {
    vout.clear();

    std::vector<std::vector<int>> big_v{v1,v2};

    for (int i=0; i < big_v.size(); i++) {
        for (int j=0; j < big_v[i].size(); j++) {
            vout.push_back(big_v[i][j]);
        }
    }
}

int main(){
    std::vector<int> v1{1,7,3,4}, v2{2,-2,19}, v3;
    std::vector<int> expected{1,7,3,4,2,-2,19};
    append_vectors(v1, v2, v3);
    std::cout << (v3 == expected) << std::endl;
}