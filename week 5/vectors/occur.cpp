#include <iostream>
#include <vector>

int main(){
    int n;
    std::cout << "enter n" << std::endl;
    std::cin >> n;

    std::vector<int> v;
    int tmp;

    for (int i=0; i < n; i++){
        std::cout << "enter a number" << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);    
    }

    int s;    
    std::cout << "enter S" << std::endl;
    std::cin >> s;

    std::vector<int> o;

    int c = 0;
    for (int j=0; j < v.size(); j++) {
        if (v[j] == s) {
            c++;
            o.push_back(j);
        }
    }

    std::cout << "There are ";
    if (c==0) {
        std::cout << "no";
    } else {
        std::cout << c;
    }
    std::cout << " occurrences of " << s;

    if (c==0) {
        std::cout << std::endl;
    } else {
        std::cout << " at indices: " << std::endl;
        for (int k = 0; k < o.size(); k++){
            std::cout << o[k] << std::endl;
        }
    }
}