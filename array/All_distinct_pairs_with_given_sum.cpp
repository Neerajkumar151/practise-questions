class Solution {
  public:
    vector<vector<int>> distinctPairs(vector<int> &arr, int target) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        
        int i=0;
        int j=n-1;
        
        while(i<j){
            int sum=arr[i]+arr[j];
            
            if(sum==target){
                ans.push_back({min(arr[i],arr[j]),max(arr[i],arr[j])});
                
                int left=arr[i];
                int right=arr[j];
                
                while(i<j && arr[i]==left) i++;
                while(i<j && arr[j]==right) j--;
            }
            else if(sum<target){
                i++;
            }
            else {
                j--;
            }
        }
        return ans;
        
    }
};