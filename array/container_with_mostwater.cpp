class Solution {
public:
    int maxArea(vector<int>& height) {
        // int lm=0;
        // int n=height.size();
        // int maxarea=0;
        // for(int i=0; i<n; i++){
        //     long long currarea=0;
        //     for(int j=i+1; j<n; j++){
        //         currarea=(j-i)*min(height[i],height[j]);
        //         if(currarea>maxarea){
        //             maxarea=currarea;
        //         }
        //     }
        // }
        // return maxarea;


        int n=height.size();
        int i=0; 
        int j=n-1;
        int maxarea=0;
        long long currarea=0;
        while(i<j){
            currarea=(j-i) * min(height[i],height[j]);
            if(currarea>maxarea){
                maxarea=currarea;
            }
            if(height[i]>height[j]){
                j--;
            }
            else {
                i++;
            }
        }
        return maxarea;
    }
};