class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());

        
        // int zero=0;
        // int one=0;
        // int two=0;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]==0){
        //         zero++;
        //     }
        //     else if(nums[i]==1){
        //         one++;
        //     }
        //     else {
        //         two++;
        //     }
        // }
        // for(int i=0; i<nums.size(); i++){
        //     if(zero>0){
        //         nums[i]=0;
        //         zero--;
        //     }
        //     else if(one>0){
        //         nums[i]=1;
        //         one--;
        //     }
        //     else {
        //         nums[i]=2;
        //         two--;
        //     }
        // }



        int i=0;
        int j=0;
        int k=nums.size()-1;

        while(j<=k){
            if(nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }
            else if(nums[j]==0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }else {
                j++;
            }
        }

    }
};