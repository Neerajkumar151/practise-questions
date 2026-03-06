class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        unordered_map<int,int> um;
        
        for(int i=0; i<n; i++){
            int temp=target-arr[i];
            if(um.find(temp)!=um.end()){
                return true;
            }
            else {
                um[arr[i]]=i;
            }
        }
        return false;
        
    }
};