class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k==0 || k==nums.size()){
            return;
        }
        // vector<int> ans;
        // int n=nums.size();
        // k=k%n;
        // for(int i=n-k; i<n; i++){
        //     ans.push_back(nums[i]);
        // }
        // for(int i=0; i<n-k; i++){
        //     ans.push_back(nums[i]);
        // }
        // for(int i=0; i<n; i++){
        //     nums[i]=ans[i];
        // }
        // return;

        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        return;

    }
};