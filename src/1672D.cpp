//
// Created by Beast on 22.03.2022.
// https://codeforces.com/contest/1657/problem/D

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;

ll n = 0, money = 0;
vector<ll> cost;
vector<ll> damage;
vector<ll> health;

ll m = 0;
vector<ll> bossDamage;
vector<ll> bossHeath;
vector<ll> answers;


int calculator(ld min_people, ll i, ll j){
    if (min_people * cost[j] > money){
        answers.pb(money + 1);
        return 0;
    } else if (min_people * cost[j] == money){
        if ((ld)health[j] / (ld)bossDamage[i] > (ld)bossHeath[i] / ((ld)damage[j] * min_people)){
            answers.pb(min_people * cost[j]);
            return 0;
        } else {
            answers.pb(money + 1);
            return 0;
        }
    } else if (min_people * cost[i] < money){
        if ((ld)health[j] / (ld)bossDamage[i] > (ld)bossHeath[i] / ((ld)damage[j] * min_people)){
            answers.pb(min_people * cost[j]);
            return 0;
        } else {
            calculator(min_people + 1, i, j);
        }
    }
    return 0;
}

int main() {
    cin >> n >> money;
    for (ll i = 0; i < n; ++i) {
        ll c, d, h;
        cin >> c >> d >> h;
        cost.pb(c);
        damage.pb(d);
        health.pb(h);
    }

    cin >> m;
    for (ll i = 0; i < m; ++i) {
        ll D, H;
        cin >> D >> H;
        bossDamage.pb(D);
        bossHeath.pb(H);
    }

    for (ll i = 0; i < m; ++i) {
        for (ll j = 0; j < n; ++j) {
            ll min_people = ceil((ld)bossHeath[i] / (ld)damage[j]);
            calculator(min_people, i, j);
        }
        sort(answers.begin(), answers.end());
        if (answers[0] > money){
            cout << -1 << ' ';
        } else {
            cout << answers[0] << ' ';
        }
    }
}
