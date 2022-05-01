class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        if(s.length() == 1) return 1;
        int slow = 0, fast = 0, ln = 0, maxLn = 0;
        set <char> st;
        while(fast < s.length()) {
            if(!st.count(s[fast])){
                st.insert(s[fast]);
                ln++;
                fast++;
                maxLn = max(ln,maxLn);
            }else {
                st.clear();
                maxLn = max(ln,maxLn);
                ln = 0;
                slow++;
                fast = slow;
            }
        }
        return maxLn;
    }
};
