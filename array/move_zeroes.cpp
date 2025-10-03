class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int i=0; int j=1;
        // if(nums.size()==1) return;
        // while(j<nums.size()){
        //     if(nums[i]==0 && nums[j]!=0){
        //         swap(nums[i],nums[j]);
        //         i++;
        //         j++;
        //     }
        //     else if(nums[i]==0 && nums[j]==0){
        //         j++;
        //     }
        //     else {
        //         i++;
        //         j++;
        //     }
            
        // }


        int nonzeroindex=0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[nonzeroindex]);
                nonzeroindex++;
            }
        }

    }
};