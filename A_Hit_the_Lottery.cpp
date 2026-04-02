#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     
    int n, ans = 0;
    cin >> n;

while(n > 0 ){
    if(n >= 100){
        ans += n / 100;
        n = n % 100;
    }else if(n >= 20 && n < 100){
        ans += n / 20;
        n = n%20;
    }else if(n >= 10 && n < 20){
        ans += n / 10;
        n = n % 10;
    }else if(n >= 5 && n < 10){
        ans += n / 5;
        n = n % 5;
    }else{
        ans += n;
        n = 0;
    }
}
    cout << ans <<"\n";
    return 0;
}