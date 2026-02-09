class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1) return;

        k %= n;
        if (k == 0) return;

        int temp = n - k;
        reverse(nums.begin(), nums.begin() + temp);
        reverse(nums.begin() + temp, nums.end());
        reverse(nums.begin(), nums.end());
    }
};
