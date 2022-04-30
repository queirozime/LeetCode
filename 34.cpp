class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, mid, first = -1, last = -1;
        while(start <= end) {
            mid = (start + end)/2;
            if(nums[mid] == target) {
                first = last = mid;
                cout << mid;
                while(first-1 >= 0 && nums[first-1] == target) first--;
                while(last+1 < nums.size() && nums[last+1] ==  target) last++;
                break;
                
            }
            if(target < nums[mid]) {
                end = mid - 1;
            }
            if(target > nums[mid]) {
                start = mid + 1;
            }
        }
        
        if(first < 0 || last < 0) return {-1,-1};
        else return {first,last};   
        
    }
};
