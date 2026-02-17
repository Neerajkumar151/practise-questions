class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        unordered_map<int,int> presum;
        int n=arr.size();
        
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum==0){
                return true;
            }
            
            if(presum.find(sum-0)!=presum.end()){
                return true;
            }
            presum[sum]++;
        }
        return false;
        
    }
};