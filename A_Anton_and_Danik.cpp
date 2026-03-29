#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int sz = s.size();
    int A = 0;
    for(char c : s){
        if(c == 'A'){
            A++;
        }
    }

    int D = sz - A;

    cout << (A == D ? ("Friendship") : (A > D ? "Anton" : "Danik\n"));
    return 0;
}