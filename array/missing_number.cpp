class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int sum=0;
        long long totalsum=n*(n+1)/2;
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        ans=totalsum-sum;
        return ans;
    }
};