class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> pre(n, 0) ;
        vector<long long> suff(n, 0) ;

        for(int i=1; i<n; i++){
            pre[i] = pre[i-1]|(long long)nums[i-1];
        }

        for(int i=n-2; i>=0; i--){
            suff[i] = suff[i+1]|(long long)nums[i+1];
        }
        long long ans=0;
        for(int i=0; i<n; i++){
            long long x = pre[i] | suff[i] | (long long)nums[i]*(1 << k);
            ans = max(ans, x) ;
        }

        return ans;
    }
};