class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int remains=target-nums[i];
            if(um.find(remains)!=um.end()){
                int j=um[remains];
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            um[nums[i]]=i;
        }
        return ans;
    }
};