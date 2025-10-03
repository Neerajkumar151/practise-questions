class Solution {
public:

    bool check(string s){
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else {
                if(st.empty()) return false;
                char c=st.top();
                if(s[i]==')' && c=='(' || s[i]=='}' && c=='{' || s[i]==']' && c=='['){
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }

    bool isValid(string s) {
        if(s=="") return true;
        if(s[0]==')' || s[0]=='}' || s[0]==']' || s.size()==1) return false;
        return check(s);
    }
};