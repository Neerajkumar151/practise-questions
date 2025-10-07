class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int i=0; int j=0;
        int maxsum=INT_MIN;
        int currsum=0;
        int n=arr.size();
        // while(j<arr.size()){
        //     currsum+=arr[j];
        //     if(currsum>maxsum){
        //         maxsum=currsum;
        //     }
        //     j++;
        //     if(j-i >=k){
        //         currsum-=arr[i];
        //         i++;
        //     }
            
        // }
        
        
         while (j < n) {
            currsum += arr[j];
            if (j - i + 1 == k) {
                maxsum = max(maxsum, currsum);
                currsum -= arr[i];
                i++;
            }
            j++;
        }
        
        return maxsum;
        
    }
};