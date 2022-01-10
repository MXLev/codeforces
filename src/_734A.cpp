//
// https://codeforces.com/problemset/problem/734/A
//

#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    string input;
    cin >> input;
    int Anton = 0, Danik = 0;
    for (char i : input) {
        if (i == 'A'){
            Anton++;
        } else if (i == 'D'){
            Danik++;
        }
    }
    if (Danik > Anton){
        cout << "Danik";
        return 0;
    }
    if (Anton > Danik){
        cout << "Anton";
        return 0;
    }
    if (Anton == Danik){
        cout << "Friendship";
    }
}