class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        vector<int> ans (k,0);
        priority_queue<int,vector<int>,greater<int>> minheap;
        
        for(int i=0; i<arr.size(); i++){
            minheap.push(arr[i]);
            if(minheap.size()>k){
                minheap.pop();
            }
        }
        
        for(int i=k-1; i>=0; i--){
            ans[i]=minheap.top();
            minheap.pop();
        }
        return ans;
    }
};