class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0;   // This represents the "vote count"
        int ans = 0;    // This will store the current candidate for majority element

        for(int i = 0; i < nums.size(); i++) {

            // If no candidate is currently selected (freq == 0),
            // we pick the current element as the new candidate
            if(freq == 0) {
                ans = nums[i];   // assign new candidate
                freq = 1;        // start vote count from 1
            }

            // If current element matches the candidate,
            // it strengthens the candidate (increase vote)
            else if(ans == nums[i]) {
                freq++;
            }

            // If current element is different,
            // it cancels out one vote from the candidate
            else {
                freq--;
            }
        }

        // At the end, 'ans' holds the majority element
        // (ONLY valid if majority element is guaranteed to exist)
        return ans;
    }
};