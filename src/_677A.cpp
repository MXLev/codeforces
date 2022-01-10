//
// https://codeforces.com/problemset/problem/677/A
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int width = 0;
    for (int i = 0; i < n; ++i) {
        int temp = 0;
        cin >> temp;
        if (temp > h){
            width += 2;
        } else if (temp <= h){
            width += 1;
        }
    }
    cout << width;
}