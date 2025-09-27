class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // priority_queue<pair<int,int>> maxheap;
        // vector<int> ans;

        // for(int i=0; i<arr.size(); i++){
        //     maxheap.push({abs(arr[i]-x),arr[i]});

        //     if(maxheap.size()>k){
        //         maxheap.pop();
        //     }
        // }
        // while(maxheap.size() > 0){
        //     ans.push_back(maxheap.top().second);
        //     maxheap.pop();
        // }
        // sort(ans.begin(),ans.end());
        // return ans;

        int low=0;
        int high=arr.size()-1;
        int n=arr.size();
        for(int i=0; i<n-k; i++){
            if(abs(arr[low]-x) <= abs(arr[high]-x)){
                high--;
            }
            else low++;
        }
        vector<int> ans;
        for(int i=low; i<=high; i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};