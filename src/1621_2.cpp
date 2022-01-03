//
// https://codeforces.com/contest/1621/problem/B
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<vector<long int>> arr(n, vector<long int> (3));
        for (int j = 0; j < n; ++j) {
            cin >> arr[j][0] >> arr[j][1] >> arr[j][2];
        }

        cout << arr[0][2] << "\n";
        long maxLength = arr[0][1] - arr[0][0] + 1;
        long maxPrice = arr[0][2];
        for (int s = 1; s < n; ++s) {
            long length1 = arr[s][1] - arr[s][0] + 1;
            long price1 = arr[s][2];

            long length = arr[s][1] - arr[0][0] + 1;
            long price = arr[s][2] + arr[0][2];

            if (length1 > length) {
                maxLength = length1;
                maxPrice = price1;
                cout << maxPrice << "\n";
                continue;
            } else if (length1 == length) {
                if (price1 < price) {
                    maxLength = length1;
                    maxPrice = price1;
                    cout << maxPrice << "\n";
                    continue;
                }
            }

            if (length > maxLength) {
                maxLength = length;
                maxPrice = price;
                cout << maxPrice << "\n";
            } else if (length == maxLength) {
                if (price < maxPrice) {
                    maxPrice = price;
                    cout << price << "\n";
                } else {
                    cout <<  maxPrice << "\n";
                }
            } else {
                cout << maxPrice << "\n";
            }
        }
    }
}