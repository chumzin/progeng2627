#include <iostream>
#include <vector>

int main(){
    int n;
    std::vector<int> seq;
    std::cin >> n;
    int tmp;

    for (int i = 0; i < n; i++){
        std::cin >> tmp;
        seq.push_back(tmp);
    }

    int t;
    std::cout << "Enter a the upper bound??? " << std::endl;
    std::cin >> t;

    for (int j = 0; j < seq.size(); j++) {
        if (seq[j] < t) {
            std::cout << seq[j] << std::endl;
        }
    }

}