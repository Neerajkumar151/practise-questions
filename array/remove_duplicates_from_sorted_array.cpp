class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // vector<int> temp;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (temp.empty() || temp.back() != nums[i]) {
        //         temp.push_back(nums[i]);
        //     }
        // }
        // for (int i = 0; i < temp.size(); i++) {
        //     nums[i] = temp[i];
        // }
        // return temp.size();


        int i=0; int j=1;
        int ans=0;
        int n=nums.size();
        while(j<n){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                i++;
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return i+1;

    }
};