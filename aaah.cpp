#include <bits/stdc++.h>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string str = "", str1 = "";

    std::cin >> str >> str1;

    if(std::count(str.begin(), str.end(), 'a') < std::count(str1.begin(), str1.end(), 'a')) {
        std::cout << "no";
    } else {
        std::cout << "go";
    }
}