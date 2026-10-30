#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    for (int i = 0; i<3; i++) {
        int tmp;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << v[0] * (v[1] + v[2]) << std::endl;


}