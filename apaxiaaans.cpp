#include <iostream>
#include <algorithm>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string str = "";

    std::cin >> str;

    std::string::iterator it;
    for(int i = 0; i < str.length(); i++) {
        it = std::unique(str.begin(), str.end());
        str.resize(std::distance(str.begin(), it));
    }
    for(it = str.begin(); it != str.end(); it++) {
        std::cout << *it;
    }
}