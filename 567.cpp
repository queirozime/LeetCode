class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        map <char,int> letter,window;
        for(int i = 0; i < s1.length(); i++) {
            if(letter.count(s1[i]) == 0) letter.insert({s1[i],1});
            else letter[s1[i]]++;
        }
        
        int stWindow = 0, endWindow = s1.length()-1;
        for(int i = stWindow; i <= endWindow; i++) {
            if(window.count(s2[i]) == 0) window.insert({s2[i],1});
            else{
                window[s2[i]]++;
            }

        }
        if(letter == window) return true;
        
        while(endWindow < s2.size()-1) {
            window[s2[stWindow]]--;
            if(window[s2[stWindow]] == 0) window.erase(s2[stWindow]);
            stWindow++;
            endWindow++;
            window[s2[endWindow]]++;
            if(window == letter) return true;
            
        }
        
        
        return false;
    }
};
