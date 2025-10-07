class Solution {
public:
    bool isPalindrome(string s) {
        // string ans="";
        // for(int i=0; i<s.size(); i++){
        //     if(!isalnum(s[i])){
        //         continue;
        //     }
        //     else {
        //         ans=ans+s[i];
        //     }
        // }
        // int i=0;
        // int j=ans.size()-1;
        // while(i<j){
        //     if(tolower(ans[i])==tolower(ans[j])){
        //         i++;
        //         j--;

        //     }
        //     else {
        //         return false;
        //     }
        // }
        // return true;




        int i=0;
        int j=s.size()-1;
        while(i<j){
            while(i<j && !isalnum(s[i])){
                i++;
            }
            while(i<j && !isalnum(s[j])){
                j--;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};