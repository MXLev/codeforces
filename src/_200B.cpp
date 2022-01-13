//
// https://www.youtube.com/watch?v=e7c_ZEwr59E&ab_channel=BadComedian
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        sum += temp;
    }
    cout << sum / n;
}