class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
        
        int largest=-1;
        int secondlargest=-1;
        
        for(int i=0; i<n; i++){
            if(arr[i]>largest){
                secondlargest=largest;
                largest=arr[i];
            }
            else {
                if(arr[i]<largest && arr[i]>secondlargest){
                    secondlargest=arr[i];
                }
            }
        }
        return secondlargest;
        
    }
};