class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n = nums.size(), finScore=0;

        int i=0, nCol = nums[0].size();

        for(int j=0; j<n; j++){
            sort(nums[j].begin(), nums[j].end(), greater<int> ());
        }

        
        while(i < nCol){
            int currScore=0;

            for(vector<int> vec:nums){
                currScore = max(vec[i], currScore);
            }

            finScore += currScore;

            i++;
        }
        return finScore;
    }
};