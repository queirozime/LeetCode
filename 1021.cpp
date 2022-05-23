class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        stack<char> stk;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                if(stk.empty()) {
                    stk.push('f');
                }else {
                    ans+=s[i];
                    stk.push(s[i]);
                }
            }else {
                if(stk.top() == '(') {
                    ans+=s[i];
                    stk.pop();
                }else if(stk.top() == 'f') {
                    stk.pop();
                }
            }
        }
        return ans;
    }
};
