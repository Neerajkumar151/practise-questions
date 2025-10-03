class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
        
        // vector<vector<int>> ans;
        // sort(nums.begin(),nums.end());
        // for(int i=0; i<nums.size()-2; i++){
        //     // check for duplicate elements...

        //     if(i>0 && nums[i]==nums[i-1]) continue;
        //     int x=0-nums[i];
        //     int s=i+1;
        //     int e=nums.size()-1;
            
        //     while(s<e){
        //         if((nums[s]+nums[e])==x){
        //             vector<int> temp;
        //             temp.push_back(nums[i]);
        //             temp.push_back(nums[s]);
        //             temp.push_back(nums[e]);
        //             ans.push_back(temp);
        //             s++;
        //             e--;
        //             while(s<e && nums[s]==nums[s-1]) s++;
        //             while(s<e && nums[e]==nums[e+1]) e--;
                   
        //         }
        //         else if(nums[s]+nums[e]>x){
        //             e--;
        //         }
        //         else {
        //             s++;
        //         }
        //     }
            
        // }
        // return ans;


        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<n-2; i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int x=0-nums[i];
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(nums[j]+nums[k]==x){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;

                    //remove duplicates until unique is found.
                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--;

                }
                else if(nums[j]+nums[k]>x){
                    k--;
                }
                else {
                    j++;
                }
            }
            
        }
        return ans;

    }
};