class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int> frequency;

        // for(int i=0; i<nums.size(); i++){
        //     frequency[nums[i]]++;
        //     if(frequency[nums[i]]>(nums.size()/2)){
        //         return nums[i];
        //     }
        // }
        // return -1;


        // sort(nums.begin(), nums.end());
        // return nums[nums.size() / 2];

        //moore's voting algorithm
        
        // int ans=0;
        // int element=0;
        // int count=0;
        // for(int i=0; i<nums.size(); i++){
        //     if(count==0){
        //         element=nums[i];
        //     }
        //     if(nums[i]==element){
        //         count++;
        //         ans=nums[i];
        //     }
        //     else {
        //         count--;
        //     }
        // }
        // return ans;



        int element=0;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(count==0){
                element=nums[i];
            }
            if(nums[i]==element){
                count++;
            }
            else {
                count--;
            }
        }
        count=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==element){
                count++;
            }
            if(count>nums.size()/2){
                return nums[i];
            }
        }
        return -1;
    }
};