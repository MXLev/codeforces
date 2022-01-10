//
// https://codeforces.com/problemset/problem/467/A
//

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int answ = 0;
    for (int i = 0; i < n; ++i) {
        int pi, qi;
        cin >> pi >> qi;
        if (pi + 2 <= qi){
            answ++;
        }
    }
    cout << answ;
}