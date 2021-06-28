#include <bits/stdc++.h>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string str = "";
    int snum = 0, wcnum = 0, ulnum = 0, llnum = 0;

    std::cin >> str;

    std::sort(str.begin(), str.end());
    
    for(int i = 0; i < str.length(); i++) {
        if((str.at(i) >= 33 && str.at(i) <= 64) || (str.at(i) >= 91 && str.at(i) <= 94) || str.at(i) == 96 || (str.at(i) >= 123 && str.at(i) <= 126)) {
            snum++;
        }
        if(str.at(i) >= 65 && str.at(i) <= 90) {
            ulnum++;
        }
        if(str.at(i) >= 97 && str.at(i) <= 122) {
            llnum++;
        }
        if(str.at(i) == 95) {
            wcnum++;
        }
    }
    std::cout << std::setprecision(17);
    std::cout << (double)wcnum/(double)str.length() << "\n";
    std::cout << (double)llnum/(double)str.length() << "\n";
    std::cout << (double)ulnum/(double)str.length() << "\n";
    std::cout << (double)snum/(double)str.length() << "\n";
}