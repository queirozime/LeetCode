class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        int lastInserted = -1;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int p1 = 0, p2 = 0;
        while(p2 != nums2.size() && p1 != nums1.size()) {
            if(nums2[p2] > nums1[p1]) {
                p1++;
            }
            else if(nums2[p2] < nums1[p1]) {
                p2++;
            }
            else if(nums2[p2] == nums1[p1]) {
                if(nums1[p1] != lastInserted){
                    intersection.push_back(nums1[p1]);
                    lastInserted = nums1[p1];
                }
                p1++;
                p2++;
            }
        }
        return intersection;
    }
};
