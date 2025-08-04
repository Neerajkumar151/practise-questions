class Solution {
public:

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> elements;
        unordered_map<int,int> nge; // Stores next greater element for each number in nums2

        if(nums2.size()==0) return {}; // Edge case: if nums2 is empty

        // Traverse nums2 from right to left to compute Next Greater Elements
        for(int i=nums2.size()-1; i>=0; i--){
            // If stack is empty, there's no greater element to the right
            if(elements.empty()){
                nge[nums2[i]]=-1;
                elements.push(nums2[i]);
            }

            // If current element is smaller than stack top, stack top is its NGE
            else if(nums2[i]<elements.top()){
                nge[nums2[i]]=elements.top();
                elements.push(nums2[i]);
            }

            else {
                // Remove all smaller or equal elements from stack — they can't be NGE
                while(!elements.empty() && nums2[i]>elements.top()){
                    elements.pop();
                }

                // If stack is empty after popping, no NGE exists
                if(elements.empty()){
                    nge[nums2[i]]=-1;
                    elements.push(nums2[i]);
                }
                else {
                    // Stack top is the next greater
                    nge[nums2[i]]=elements.top();
                    elements.push(nums2[i]);
                }
            }
        }

        // Now we use the precomputed NGE values to build answer for nums1
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            ans.push_back(nge[nums1[i]]);
        }

        return ans;
    }
};
