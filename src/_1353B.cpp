//
// https://codeforces.com/problemset/problem/1353/B
//

#include <iostream>
#include <vector>

using namespace std;

int minFinder(vector<int> a, int n){
    int min = 31;
    int min_index = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < min){
            min = a[i];
            min_index = i;
        }
    }
    return min_index;
}
int maxFinder(vector<int> b, int n){
    int max = 0;
    int max_index = 0;
    for (int i = 0; i < n; ++i) {
        if (b[i] > max){
            max = b[i];
            max_index = i;
        }
    }
    return max_index;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        for (int j = 0; j < n; ++j) {
            cin >> b[j];
        }
        for (int j = 0; j < k; ++j) {
            int max_index = maxFinder(b, n);
            int min_index = minFinder(a, n);
            if (a[min_index] >= b[max_index]){
                break;
            }
            int temp = b[max_index];
            b[max_index] = a[min_index];
            a[min_index] = temp;
        }
        int sumA = 0;
        for (int j = 0; j < n; ++j) {
            sumA += a[j];
        }
        cout << sumA << '\n';
    }
}