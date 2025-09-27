class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;
        int n=nums.size();
        for(int i=0; i<n; i++){
            um[nums[i]]++;
        }

        for(auto it: um){
            minheap.push({it.second , it.first});
            if(minheap.size()>k){
                minheap.pop();
            }
        }
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(minheap.top().second);
            minheap.pop();
        }
        return ans;
    }
};