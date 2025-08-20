class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> frequency;

        for(int i=0; i<nums.size(); i++){
            frequency[nums[i]]++;
            if(frequency[nums[i]]>(nums.size()/2)){
                return nums[i];
            }
        }
        return -1;
       
    }
};