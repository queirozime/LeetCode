class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int last = nums.size() - 1, start = 0;
        while(start < last) {
            while(nums[start] == 0 && start < last) {
                int init = start;
                while(init < last) {
                    int ax = nums[init+1];
                    nums[init+1] = nums[init];
                    nums[init] = ax;
                    init++;
                }
                last--;
            }
            start++;
        }
    }
};
