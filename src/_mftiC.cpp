//
// Created by Beast on 23.04.2022.
//

#include <iostream>

using namespace std;

int w = 0, h = 0, xe = 0, ye = 0;

//int find(int rp, int cp, int r, int c, int count){
//    if (count > max(w, h)) {
//        return INT32_MAX;
//    }
//
//    if (r < 1){
//        r = h;
//    } else if (r > h){
//        r = 1;
//    }
//    if (c < 1){
//        c = w;
//    } else if (c > w){
//        c = 1;
//    }
//    if (r == ye && c == xe){
//        return count;
//    }
//
//    int result1 = INT32_MAX, result2 = INT32_MAX, result3 = INT32_MAX, result4 = INT32_MAX;
//    int r1 = 0, c1 = 0;
//
//    if (r == ye) {
//        result1 = abs(xe - c);
//        result2 = (w - xe) + c;
//
//        return count + min(result1, result2);
//    }
//
//    if (c == xe) {
//        result1 = abs(ye - r);
//        result2 = (h - ye) + r;
//
//        return count + min(result1, result2);
//    }
//
//    r1 = r + 1;
//    c1 = c;
//    if (r1 != rp || c1 != cp) {
//        result1 = find(r, c, r1, c1, count + 1);
//    }
//
//    r1 = r - 1;
//    c1 = c;
//    if (r1 != rp || c1 != cp) {
//        result2 = find(r, c, r1, c1, count + 1);
//    }
//
//    r1 = r;
//    c1 = c + 1;
//    if (r1 != rp || c1 != cp) {
//        result3 = find(r, c, r1, c1, count + 1);
//    }
//
//    r1 = r;
//    c1 = c - 1;
//    if (r1 != rp || c1 != cp) {
//        result4 = find(r, c, r1, c1, count + 1);
//    }
//
//    return min(min(result1, result2), min(result3, result4));
//}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> w >> h;
    int x0, y0;
    cin >> x0 >> y0 >> xe >> ye;

    int dxdy = abs(xe - x0) + abs(ye - y0);
    int dxwy = abs(xe - x0) + (h - ye) + y0;
    int wxdy = (w - xe) + x0 + abs(ye - y0);
    int wxwy = (w - xe) + x0 + (h - ye) + y0;
    cout << min(min(dxdy, dxwy), min(wxdy, wxwy));

//    int r1 = find(y0, x0, y0 + 1, x0, 1),
//        r2 = find(y0, x0, y0 - 1, x0, 1),
//        r3 = find(y0, x0, y0, x0 + 1, 1),
//        r4 = find(y0, x0, y0, x0 - 1, 1);

//    cout << min(min(r1, r2), min(r3, r4)) << "\n";
}
