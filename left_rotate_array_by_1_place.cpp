// This ia a brute force solution and its Time Complexity is O(n) and space complexity of O(n)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n);
        for(int i =0; i<n; i++){
            temp[(i+k)%n] = nums[i];
        }
        nums = temp;
    }
};

