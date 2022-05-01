class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int begin = 0, end = nums.size() - 1, mid;
        if(nums.size() == 1) return 0;
        if(nums.size() == 2) {
            if(nums[0] > nums[1]) return 0;
            else return 1;
        }
        while(begin <= end) {
            mid = (begin + end)/2;
            if(mid == 0 && end == 0) return mid;
            if(mid == nums.size()-1 && end == mid) return mid;
            if(mid == 0 && nums[mid] > nums[mid+1]) return mid;
            if(mid == nums.size()-1 && nums[mid] > nums[mid-1]) return mid;
            if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]) return mid;
            if(nums[mid] < nums[mid+1]) {
                begin = mid + 1;
            }else if(nums[mid] < nums[mid-1]) {
                end = mid - 1;
            }
        }
        return -1;
    }
};
