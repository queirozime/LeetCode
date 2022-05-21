class Solution {
public:
    string truncateSentence(string s, int k) {
        string newStr;
        int spaces = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                spaces++;
                if(spaces == k) break;
                newStr+=s[i];
            }
            else newStr+=s[i];
        }
        return newStr;
    }
};
