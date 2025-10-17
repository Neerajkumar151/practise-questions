class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> temp;
        for(int i=0; i<s.size(); i++){
            if(temp.empty()){
                temp.push(s[i]);
            }
            else if(s[i]!=temp.top()){
                temp.push(s[i]);
            }
            else {
                temp.pop();
            }
        }
        
        string ans="";
        
        while(!temp.empty()){
            ans+=temp.top();
            temp.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};