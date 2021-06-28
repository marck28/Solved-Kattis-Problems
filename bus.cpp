#include <bits/stdc++.h>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int num, K;
    std::cin >> num;
    
    std::cout << std::setprecision(20);
    
    while(num--) {
        std::cin >> K;
        std::cout << pow(2, K) - 1 << "\n";
    }
}