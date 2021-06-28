#include <bits/stdc++.h>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int C, N, i, sum, averageMark, counter;
    double percentage;

    std::cin >> C;

    while(C--) {
        std::cin >> N;
        std::vector<int>* vect = new std::vector<int>(N);

        i = 0;
        sum = 0;
        while(N--) {
            std::cin >> vect->at(i);
            sum += vect->at(i);
            i++;
        }
        averageMark = sum/vect->size();
        sort(vect->begin(), vect->end());

        counter = 0;

        for(i = 0; i < vect->size() && vect->at(i) <= averageMark; i++);
        for(int j = i; j < vect->size() && vect->at(j) > averageMark; j++) {
            counter++;
        }
        percentage = ((double)counter/vect->size())*100;

        std::cout << std::setprecision(3) << std::fixed;
        std::cout << percentage << "%" << "\n"; //Perché stampa 40% invece di 40.000%?
    }
}