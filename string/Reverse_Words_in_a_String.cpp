class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int n = s.size();
        string temp = "";

        for(int i = 0; i < n; i++){
            if(s[i] == ' '){
                if(temp != ""){
                    st.push(temp);
                    temp = "";
                }
            }
            else{
                temp += s[i];
            }
        }

        if(temp != "") st.push(temp); 

        temp = "";
        while(!st.empty()){
            temp += st.top();
            st.pop();
            if(!st.empty()) temp += " "; 
        }

        return temp;
    }
};