class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        stack<int> temp;
        int n = arr.size();
        vector<int> ans;

        // Edge case: If only one element, there's no element to the left → return -1
        if(n == 1) return {-1};
        
        for(int i = 0; i < arr.size(); i++){
            // Step 1: Pop all greater or equal elements from stack
            // We only care about strictly smaller elements on the left
            while(!temp.empty() && arr[i] <= temp.top()){
                temp.pop();
            }

            // Step 2: If stack is empty, no smaller element exists on the left
            if(temp.empty()){
                ans.push_back(-1);
            } 
            // Step 3: Top of stack is the closest smaller element on the left
            else {
                ans.push_back(temp.top());
            }

            // Step 4: Push current element to stack for next iterations
            temp.push(arr[i]);
        }

        return ans;
    }
};
