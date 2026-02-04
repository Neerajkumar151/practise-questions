class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftsum(n);
        vector<int> rightsum(n);

        int temp=0;
        for(int i=0; i<n; i++){
            leftsum[i]=temp;
            temp+=nums[i];
        }

        temp=0;
        for(int i=n-1; i>=0; i--){
            rightsum[i]=temp;
            temp+=nums[i];
        }

        for(int i=0; i<n; i++){
            if(leftsum[i]==rightsum[i]){
                return i;
            }
        
        }
        return -1;
    }
};