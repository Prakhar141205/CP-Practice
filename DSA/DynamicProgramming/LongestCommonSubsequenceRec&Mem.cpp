#include <iostream>
#include <string>
#include <vector>

using namespace std;

int LCSRec(string str1, string str2){
    int n = str1.size();
    int m = str2.size();

    if(n == 0 || m == 0){
        return 0;
    }

    if(str1[n-1] == str2[m-1]) return 1 + LCSRec(str1.substr(0, n-1), str2.substr(0, m-1));

    else {
        return max(LCSRec(str1.substr(0, n-1), str2) , LCSRec(str1, str2.substr(0, m-1)));

}

}

int LCSMem(string str1, string str2, vector<vector<int>>& dp){
    
    int n  = str1.size();
    int m  = str2.size();

    if(n == 0 || m == 0) return 0;

    if(dp[n][m] != -1) return dp[n][m];

    if(str1[n-1] == str2[m-1]) {
        dp[n][m] = 1 + LCSMem(str1.substr(0, n-1), str2.substr(0, m-1), dp);
        return dp[n][m];
    }else{
        int ans1 = LCSMem(str1.substr(0, n-1), str2, dp);
        int ans2 = LCSMem(str1, str2.substr(0, m-1), dp);
        dp[n][m] = max(ans1, ans2);
        return dp[n][m];
    }
}



int main(){
    string str1 = "abcdge";
    string str2 = "abedg";
    vector<vector<int>> dp(str1.size()+1, vector<int> (str2.size()+1, -1));

    cout << "Maximum Length of LCS = " <<LCSRec(str1, str2)<< "\n"; 
    cout << "Maximum Length of LCS = " <<LCSMem(str1, str2, dp)<< "\n"; 
    return 0;

}