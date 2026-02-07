class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0; int j=1;
        int n=nums.size();
        if(n==0) return 0;
        int ans=1;
        while(j<n){
            if(nums[j]==nums[i]){
                j++;
            }
            else {
                i++;
                nums[i]=nums[j];
                j++;
                ans++;
            }
        }
        return ans;
    }
};