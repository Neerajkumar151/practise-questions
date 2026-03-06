class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int n=arr.size();
        int count=0;
        
        unordered_map<int,int> ans;
        
        for(int i=0; i<n; i++){
            int temp=target-arr[i];
            
            if(ans.find(temp)!=ans.end()){
                count+=ans[temp];
                ans[arr[i]]++;
            }
            else {
                ans[arr[i]]++;
            }
        }
        return count;
        
    }
};