class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> freq(26,0);

        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int f : freq) {
            if (f != 0) return false;
        }
        return true;


        // sort(t.begin(),t.end());
        // sort(s.begin(),s.end());
        // if(s.size() != t.size()) return false;
        // int i=0; int j=0;
        // while(i<s.size() && j<t.size()){
        //     if(s[i]!=t[j]){
        //         return false;
        //     }
        //     i++;
        //     j++;
        // }
        // return true;
    }
};