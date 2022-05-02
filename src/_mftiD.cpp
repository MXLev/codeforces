//
// Created by Beast on 01.05.2022.
//

#include <iostream>
#include <vector>

using namespace std;

int find (int r, int c, int sr, int sc, vector<vector<char>> &screen, string &pattern) {
    int counter = 0;

    for (int rr = r; rr < sr; ++rr) {
        for (int cc = c; cc < sc; ++cc) {
            if (pattern.find(screen[rr][cc]) != string::npos) {
                ++counter;
            }
        }
    }

    return counter;
}

int main() {
    int u, d, m;
    string pattern;
    cin >> u >> d >> m;
    cin >> pattern;
    vector<vector<char>> screen(u, vector<char> (d));
    for (int r = 0; r < u; ++r) {
        for (int c = 0; c < d; ++c) {
            cin >> screen[r
            ][c];
        }
    }

    int maxBad = 0, maxSquare = 1;
    double maxRate = 0.0;

    for (int r = 0; r < (u - m); ++r) {
        for (int c = 0; c < (d - m); ++c) {

            for (int sr = m; sr < u; ++sr) {
                for (int sc = m; sc < d; ++sc) {

                    int bad = find(r, c, sr, sc, screen, pattern);
                    int square = ((sr - r) * (sc + c));
                    double rate = (double)bad / square;
                    if (maxRate < rate) {
                        maxRate = rate;
                        maxSquare = square;
                        maxBad = bad;
                        cout << maxRate << ' ' << maxSquare << ' ' << maxBad << '\n';
                        cout << r << ' ' << sr << ' ' << c << ' ' << sc << '\n' << "\n";
                    }
                }
            }
        }
    }

    cout << maxBad << "/" << maxSquare << "\n";
}