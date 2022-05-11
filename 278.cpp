class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int start = 1, end = n, mid;
        unsigned int lesser = 0;
        
        while(start <= end) {
            mid = (start+end)/2;
            if(isBadVersion(mid)) {
                lesser = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return lesser;
    }
};
