class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0, fast = 1;
        while(fast < nums.size()) {
            if(nums[slow] == nums[fast]) {
                fast++;
            }else{
                slow++;
                nums[slow] = nums[fast];
                fast++;
            }
        }
        return slow+1;
    }
};
