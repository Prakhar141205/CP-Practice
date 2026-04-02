class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        map<int, int> m; // prefixSum , count
        m[0]=1;
        int prefixSum = 0;
       for(int i=0; i<n; i++){
            prefixSum  += nums[i];
            int newSum = prefixSum - k;
            ans += m[newSum];
            m[prefixSum] += 1;
       }
        return ans;
    }
};