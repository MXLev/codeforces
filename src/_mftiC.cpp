//
// Created by Beast on 23.04.2022.
//

#include <iostream>

using namespace std;

int w = 0, h = 0, xe = 0, ye = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> w >> h;
    int x0, y0;
    cin >> x0 >> y0 >> xe >> ye;

    int dx = abs(xe - x0);
    if (x0 > xe){
        int t = x0;
        x0 = xe;
        xe = t;
    }
    int wx = (x0 - 1) + (w - xe + 1);

    int dy = abs(ye - y0);
    if (y0 > ye){
        int t = y0;
        y0 = ye;
        ye = t;
    }
    int wy = (y0 - 1) + (h - ye + 1);

    cout << min(dx, wx) + min(dy, wy) << '\n';
}
