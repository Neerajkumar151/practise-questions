class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> minheap;
        int j=0;
        for(int i=0; i<arr.size(); i++){
            minheap.push(arr[i]);
            if(minheap.size()>k){
                int top=minheap.top();
                minheap.pop();
                arr[j]=top;
                j++;
            }
        }
        while(j<arr.size()){
            arr[j]=minheap.top();
            minheap.pop();
            j++;
        }
    }
};