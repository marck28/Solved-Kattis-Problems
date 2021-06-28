#include <bits/stdc++.h>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int D, E, F;
    std::string str = "";

    std::cin >> D >> E >> F;
    std::cin >> str;

    std::vector<int> vect;

    vect.push_back(D);
    vect.push_back(E);
    vect.push_back(F);

    sort(vect.begin(), vect.end());

    for(int i = 0; i < 3; i++) {
        switch(str.at(i)) {
            case 'A': {
                std::cout << vect.at(0) << " ";
                break;
            }
            case 'B': {
                std::cout << vect.at(1) << " ";
                break;
            }
            case 'C': {
                std::cout << vect.at(2) << " ";
                break;
            }
        }
    }
}