//
// https://codeforces.com/problemset/problem/228/A
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<int> output;
    output.insert(s1);
    output.insert(s2);
    output.insert(s3);
    output.insert(s4);
    cout << 4 - output.size();
}