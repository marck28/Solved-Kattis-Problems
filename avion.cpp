#include <bits/stdc++.h>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string str = "";
    bool found = false;

    for(int i = 1; i <= 5; i++) {
        std::cin >> str;
        if(str.find("FBI") != std::string::npos) {
            std::cout << i << " ";
            found = true;
        }
    }

    if(!found) {
        std::cout << "HE GOT AWAY!";
    }
}