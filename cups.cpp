#include <bits/stdc++.h>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string str = "", str1 = "";
    int N, radius;

    std::cin >> N;

    std::vector<std::pair<int, std::string>> vect;
    std::pair<int, std::string> paio;

    while(N--) {
        std::cin >> str >> str1;

        //Quando la prima stringa è un numero naturale...
        if(str.at(0) - '0' >= 0 && str.at(0) - '0' <= 9) {
            radius = std::stoi(str)/2;
        } else {
            str.swap(str1);
        }

        paio.first = stoi(str);
        paio.second = str1;
        vect.push_back(paio);
    }

    std::sort(vect.begin(), vect.end());

    std::vector<std::pair<int, std::string>>::iterator it1;

    for(std::vector<std::pair<int, std::string>>::iterator it = vect.begin(); it != vect.end(); it++) {
        it1 = it;
        while(it1->first == (it1 + 1)->first) {
            it1++;
        }

        //Errore! Non devo ordinare per numeri interi, ma in ordine lessicografico!
        std::sort(it, it1);
        it1++;
        it = it1;
    }

    for(std::vector<std::pair<int, std::string>>::iterator it = vect.begin(); it != vect.end(); it++) {
        std::cout << it->second << "\n";
    }
}