#include <bits/stdc++.h>

typedef struct question {
    bool accepted = false;
    int time = 0;
} question;

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::map<char, question> map;
    std::pair<char, question> paio;
    int input;
    while(std::cin >> input && input != -1) {
        char q;
        std::string str;
        question domanda;

        std::cin >> q >> str;
        paio.first = q;
        paio.second = domanda;
        map.insert(paio);
        if(str.compare("right") == 0) {
            map.at(q).accepted = true;
            map.at(q).time += input;
        } else {
            map.at(q).time += 20;
        }
    }

    int rightAns = 0, totalAns = 0;
    for(auto i: map) {
        if(i.second.accepted) {
            rightAns++;
            totalAns += i.second.time;
        }
    }

    std::cout << rightAns << " " << totalAns;
}