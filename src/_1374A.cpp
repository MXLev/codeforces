//
// https://codeforces.com/problemset/problem/1374/A
//

#include <iostream>
#include <valarray>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int z = 0; z < t; ++z) {
        int x, y, n;
        cin >> x >> y >> n;
        int a = (y - (n % x));
        for (int i = 0; i < n; ++i) {
            if ((n / x - i) * x + y == x * (n / x - i) + y){
                cout << (n / x - i) * x + a << '\n';
            }
        }
    }
}