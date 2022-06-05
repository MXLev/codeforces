//
// https://codeforces.com/problemset/problem/1353/B
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        int suma = 0, sumb = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            suma += a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            sumb += b[i];
        }
        if (suma > sumb){
            for (int i = 0; i < k; ++i) {
                int max = 0, maxIndex = 0;
                for (int j = 0; j < n; ++j) {
                    if (a[j] > max){
                        max = a[j];
                        a[j] = 31;
                        maxIndex = j;
                    }
                }
                int min = 31, minIndex = 0;
                for (int j = 0; j < n; ++j) {
                    if (b[j] < min){
                        min = b[j];
                        b[j] = 31;
                        minIndex = j;
                    }
                }
                int c = a[maxIndex];
                a[maxIndex] = b[minIndex];
                b[minIndex] = c;
            }

            int sumAnsw = 0;
            for (int i = 0; i < n; ++i) {
                sumAnsw += a[i];
            }
            cout << sumAnsw << '\n';
        } else {
            int max = 0, maxIndex = 0;
            for (int j = 0; j < n; ++j) {
                if (b[j] > max){
                    max = b[j];
                    b[j] = 31;
                    maxIndex = j;
                }
            }
            int min = 31, minIndex = 0;
            for (int j = 0; j < n; ++j) {
                if (a[j] < min){
                    min = a[j];
                    a[j] = 31;
                    minIndex = j;
                }
            }
            int c = b[maxIndex];
            b[maxIndex] = a[minIndex];
            a[minIndex] = c;

            int sumAnsw = 0;
            for (int i = 0; i < n; ++i) {
                sumAnsw += b[i];
            }
            cout << sumAnsw << '\n';
        }

    }
}