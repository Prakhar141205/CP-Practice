class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        // used LL cycle detection approach 
        // assume array as a LL 
        // 
        int slow = nums[0], fast = nums[0];

        do{
            slow = nums[slow]; // +1 updation
            fast = nums[nums[fast]]; // +2 updation
        }while(slow != fast);
            slow = nums[0];
            while(slow != fast){
                slow = nums[slow];
                fast = nums[fast];
            }
        return slow;
    }
};