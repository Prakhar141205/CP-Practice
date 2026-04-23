const long long mod = 1e9 + 7;
class Solution {
public:
    int sumOfPower(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long ans=0, prev=0;
        
        for(int i=0; i<nums.size(); i++){
           ans = (ans + (nums[i]%mod)*(nums[i]%mod)%mod * (prev%mod + nums[i]%mod))%mod;
            prev = (prev%mod)*2 + (nums[i]%mod);
        }
        return (int) ans%mod;
    }
};