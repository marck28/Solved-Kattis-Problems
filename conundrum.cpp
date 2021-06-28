#include <bits/stdc++.h>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string str = "", str1 = "";
    int numDays = 0, i = 0;

    std::cin >> str;

    std::string::iterator it = str.begin();

    while(it != str.end()) {
        if(str.at(i) != 'P' || str.at(i + 1) != 'E' || str.at(i + 2) != 'R') {
            if(str.at(i) != 'P') {
                numDays++;
            }
            if(str.at(i + 1) != 'E') {
                numDays++;
            }
            if(str.at(i + 2) != 'R') {
                numDays++;
            }
        }
        i += 3;
        it += 3;
    }

    std::cout << numDays;
}