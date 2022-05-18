class Solution {
public:
    
    void reverseString(int wordStart, int wordEnd, string &s) {
        while(wordStart < wordEnd) {
            swap(s[wordStart],s[wordEnd]);
            wordStart++;
            wordEnd--;
        }
    }
    
    string reverseWords(string s) {
        int strR = 0, strL = 0;
        while(strL < s.size()) {
            strR++;
            if(s[strR] == ' ' || s[strR] == '\0') {
                int wordStart = strL;
                int wordEnd = strR - 1;
                reverseString(wordStart, wordEnd, s);
                strL = strR+1;
            }
        }
        return s;
    }
};
