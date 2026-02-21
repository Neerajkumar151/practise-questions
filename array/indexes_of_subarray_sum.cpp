class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int> ans;
        int i=0;
        int j=0;
        int n=arr.size();
        int sum=0;
        while(j<n){
            sum+=arr[j];
            while(sum > target && i <= j){
                sum -= arr[i];
                i++;
            }
            if(sum==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            j++;
        }
        return {-1};
    }
};