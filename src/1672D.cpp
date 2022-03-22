//
// Created by Beast on 22.03.2022.
// https://codeforces.com/contest/1657/problem/D

#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define pb push_back

using namespace std;

long long n = 0, money = 0;
vector<long long> cost;
vector<long long> damage;
vector<long long> health;

long long m = 0;
vector<long long> bossDamage;
vector<long long> bossHeath;
vector<long long> answers;


int calculator(ll min_people, ll i, ll j){
    if (min_people * cost[j] > money){
        answers.pb(money + 1);
        return 0;
    } else if (min_people * cost[j] == money){
        if (health[j] / bossDamage[i] < bossHeath[i] / (damage[j] * min_people)){
            answers.pb(min_people * cost[j]);
            return 0;
        } else {
            answers.pb(money + 1);
            return 0;
        }
    } else if (min_people * cost[i] < money){
        if (health[j] / bossDamage[i] < bossHeath[i] / (damage[j] * min_people)){
            answers.pb(min_people * cost[j]);
        } else {
            calculator(min_people + 1, i, j);
        }
    }
    return 0;
}

int main() {
    cin >> n >> money;
    for (ll i = 0; i < n; ++i) {
        int tcost, tdamage, thealth;
        cin >> tcost >> tdamage >> thealth;
        cost.pb(tcost);
        damage.pb(tdamage);
        health.pb(thealth);
    }

    cin >> m;
    for (ll i = 0; i < m; ++i) {
        int tbossDamage, tbossHeath;
        cin >> tbossDamage >> tbossHeath;
        bossDamage.pb(tbossDamage);
        bossHeath.pb(tbossHeath);
    }

    for (ll i = 0; i < m; ++i) {
        for (ll j = 0; j < n; ++j) {
            ll min_people = bossHeath[i] / damage[j];
            calculator(min_people, i, j);
        }
    }
    sort(answers.begin(), answers.end());
    if (answers[0] == money + 1){
        cout << -1;
    } else {
        cout << answers[0];
    }
}
