class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> left(n);
        // vector<int> right(n);
        // vector<int> ans(n);

        // for(int i=0; i<n; i++){
        //     if(i==0) left[i]=1;
        //     else left[i]=nums[i-1] * left[i-1];
        // }

        // for(int i=n-1; i>=0; i--){
        //     if(i==(n-1)) right[i]=1;
        //     else right[i]=nums[i+1] * right[i+1];
        // }

        // for(int i=0; i<n; i++){
        //     ans[i]=left[i]*right[i];
        // }
        // return ans;


        int n=nums.size();
        vector<int> ans(n,1);
        ans[0]=1;
        for(int i=1; i<n; i++){
            ans[i]=nums[i-1]*ans[i-1];
        }

        long long rightproduct=1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] = ans[i] * rightproduct;
            rightproduct *= nums[i];
        }

        return ans;
    }
};