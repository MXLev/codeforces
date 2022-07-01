//
// Created by Lev Skuratov on 01.07.2022.
// https://codeforces.com/problemset/problem/1097/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    pair<char, char> fCard;
    cin >> fCard.first >> fCard.second;
    for (int i = 0; i < 5; ++i) {
        pair<char, char> card;
        cin >> card.first >> card.second;
        if (fCard.first == card.first){
            cout << "YES" << '\n';
            return 0;
        } else if (fCard.second == card.second){
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';
}