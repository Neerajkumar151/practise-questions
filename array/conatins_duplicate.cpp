class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        bool ans=false;
        for(int i=0; i<nums.size(); i++){
            um[nums[i]]++;
            if(um[nums[i]]>=2){
                ans=true;
                return ans;
            }
        }
        return ans;
    }
};