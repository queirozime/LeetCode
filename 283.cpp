//first solution thought
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

//better solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fast = 0, lastNonZeroEl = 0;
        while(fast < nums.size()) {
            if(nums[fast] != 0) {
                nums[lastNonZeroEl] = nums[fast];
                lastNonZeroEl++;
            }
            fast++;
        }
        for(int i = lastNonZeroEl; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
