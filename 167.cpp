class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int slow = 0, mid,begin,end;

        while(slow < numbers.size()) {
            begin = slow+1;
            end = numbers.size() - 1;
            int nTarget = target - numbers[slow];
            while(begin <= end) {
                mid = (begin+end)/2;
                if(numbers[mid] == nTarget) return {slow+1, mid+1};
                if(nTarget < numbers[mid]) end = mid - 1;
                if(nTarget > numbers[mid]) begin = mid + 1;
            }
           
            slow++;
        }
        return {1,1};
    }
};
