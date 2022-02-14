//
// https://codeforces.com/problemset/problem/703/A
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int MishkaWins = 0, ChrisWins = 0;
    for (int i = 0; i < n; ++i) {
        int Mishka = 0, Chris = 0;
        cin >> Mishka >> Chris;
        if (Mishka > Chris){
            MishkaWins++;
        } else if (Chris > Mishka){
            ChrisWins++;
        }
    }
    if (MishkaWins > ChrisWins){
        cout << "Mishka";
    } else if (ChrisWins > MishkaWins){
        cout << "Chris";
    } else {
        cout << "Friendship is magic!^^";
    }
}