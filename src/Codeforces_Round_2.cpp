//
// Created by Beast on 14.12.2021.
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

        if (n == 3) {
            string input;
            cin >> input;

            cout << input << "a" << "\n";
            continue;
        }

        vector<string> input(n - 2);
        for (int j = 0; j < n - 2; ++j) {
            cin >> input[j];
        }
        string output;
        output += input[0][0];
        int counter = 1;
        for (int j = 0; j < input.size() - 1; ++j) {
            if (input[j][1] == input[j + 1][0]){
                output += input[j][1];
                ++counter;
            } else {
                output += input[j][1];
                output += input[j + 1][0];
                counter += 2;
            }
        }

        if (counter == n - 1) {
            output += input[input.size() - 1][1];
        }

        if (counter == n - 2) {
            output += input[input.size() - 1][1];
            output += input[input.size() - 1][1];
        }

        cout << output << "\n";
    }
}