//
// https://codeforces.com/problemset/problem/116/A
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int occupied_places = 0, needed_places = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        (occupied_places -= a) += b;
        if (occupied_places > needed_places){
            needed_places = occupied_places;
        }
    }
    cout << needed_places;
}