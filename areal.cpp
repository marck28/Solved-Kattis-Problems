#include <iostream>
#include <cmath>
#include <iomanip>

int main(void) {
    double a;

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> a;
    fflush(stdin);

    std::cout << std::setprecision(34) << 4*sqrt(a);
}