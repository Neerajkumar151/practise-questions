// class Solution {
//   public:
//     int findEquilibrium(vector<int> &arr) {
//         vector<int> lps(arr.size(),0);
//         vector<int> rps(arr.size(),0);
//         int n=arr.size();
        
//         int j=n-2;
//         for(int i=1; i<n; i++){
//             lps[i]=lps[i-1]+arr[i-1];
//             rps[j]=rps[j+1]+arr[j+1];
//             j--;
//         }
        
//         for(int i=0; i<n; i++){
//             if(lps[i]==rps[i]){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };





// optimals solution
class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int n=arr.size();
        
        int totalsum=accumulate(arr.begin(),arr.end(),0);
        
        int leftsum=0;
        int temp=0;
        for(int i=0; i<n; i++){
            temp=totalsum-arr[i];
            if(temp==leftsum){
                return i;
            }
            leftsum+=arr[i];
            totalsum=totalsum-arr[i];
        }
        return -1;
        
        
    }
};