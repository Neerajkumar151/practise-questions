class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> subarray;
        subarray[0]=1;

        int sum=0;
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            int temp = sum - k;
            if(subarray.find(temp)!=subarray.end()){
                ans += subarray[temp]; 
            }
            subarray[sum]++;
        }
        return ans;
    }
};