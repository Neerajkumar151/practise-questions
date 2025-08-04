class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        stack<int> temp;
        int n=arr.size();
        vector<int> ans;
        if(n==1) return {-1};
        
        for(int i=0; i<arr.size(); i++){
            while(!temp.empty() && arr[i]<=temp.top()){
                temp.pop();
            }
            if(temp.empty()){
                temp.push(arr[i]);
                ans.push_back(-1);
            }
            else {
                ans.push_back(temp.top());
                temp.push(arr[i]);
            }
            
        }
        return ans;
        
    }
};