class Solution {
public:
    int trap(vector<int>& height) {
        // vector<int> leftheight;
        // vector<int> rightheight;
        // int n=height.size();

        // int leftmax=-1;
        // for(int i=0; i<n; i++){
        //     if(height[i]>leftmax){
        //         leftmax=height[i];
        //     }
        //     leftheight.push_back(leftmax);
        // }

        // int rightmax=-1;
        // for(int i=n-1; i>=0; i--){
        //     if(height[i]>rightmax){
        //         rightmax=height[i];
        //     }
        //     rightheight.push_back(rightmax);
        // }
        // reverse(rightheight.begin(),rightheight.end());

        // int sum=0;
        // for(int i=0; i<n; i++){
        //     int temp=min(leftheight[i],rightheight[i]);
        //     if((temp-height[i]) > 0){
        //         sum+=temp-height[i];
        //     }
           
        // }
        // return sum;



        
        int n=height.size();
        int left=0;
        int right=n-1;
        int leftmax=0;
        int rightmax=0;
        int ans=0;

        while(left<right){
            if(height[left]<height[right]){
                leftmax=max(height[left],leftmax);
                ans+=leftmax-height[left];
                left++;
            }
            else {
                rightmax=max(height[right],rightmax);
                ans+=rightmax-height[right];
                right--;
            }
        }
        return ans;

    }
};