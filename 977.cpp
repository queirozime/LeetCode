class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int init = 0, end = nums.size() - 1;
        int insert = end;
        vector<int> ans = nums;
        while(init <= end) {
           if(nums[init]*nums[init] > nums[end]*nums[end]) {
               ans[insert] = nums[init]*nums[init];
               init++;
               insert--;
           }else{
               ans[insert] = nums[end]*nums[end];
               end--;
               insert--;
           }
        }
        return ans;
    }
};
