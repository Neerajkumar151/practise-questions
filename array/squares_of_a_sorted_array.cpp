class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // vector<int> ans;
        // for(int i=0; i<nums.size(); i++){
        //     ans.push_back(nums[i]*nums[i]);
        // }
        // sort(ans.begin(),ans.end());
        // return ans;


        int i=0; int j=nums.size()-1;
        vector<int> ans(nums.size());
        int k=nums.size()-1;

        while(i<=j){
            if(nums[i]*nums[i]<=nums[j]*nums[j]){
                ans[k]=nums[j]*nums[j];
                j--;
                k--;
            }
            else if(nums[i]*nums[i]>nums[j]*nums[j]){
                ans[k]=nums[i]*nums[i];
                i++;
                k--;
            }
            else {
                ans[k]=nums[i]*nums[i];
                k--;
                i++;
            }
        }
        return ans;

    }
};