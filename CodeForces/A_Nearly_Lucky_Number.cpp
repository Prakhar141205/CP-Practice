#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    int count = 0;

    // Step 1: count lucky digits
    for(char c : n) {
        if(c == '4' || c == '7') {
            count++;
        }
    }

    // Step 2: check if count itself is lucky
    string s = to_string(count);

    bool isLucky = true;
    for(char c : s) {
        if(c != '4' && c != '7') {
            isLucky = false;
            break;
        }
    }

    if(isLucky) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}