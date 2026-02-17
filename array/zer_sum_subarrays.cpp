class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        unordered_map<int,int> subarray;

        int sum=0;
        int ans=0;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            if(sum==0){
                ans++;
            }
            if(subarray.find(sum-0)!=subarray.end()){
                ans += subarray[sum-0]; 
            }
            subarray[sum]++;
        }
        return ans;
        
    }
};