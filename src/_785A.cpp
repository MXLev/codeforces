//
// https://codeforces.com/problemset/problem/785/A
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int answ;
    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        if (temp == "Tetrahedron"){
            answ += 4;
        }
        if (temp == "Cube"){
            answ += 6;
        }
        if (temp == "Octahedron"){
            answ += 8;
        }
        if (temp == "Dodecahedron"){
            answ += 12;
        }
        if (temp == "Icosahedron"){
            answ += 20;
        }
    }
    cout << answ;
}