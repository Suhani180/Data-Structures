//This is the soltion of leetcode problem 1752 to check if the array is sorted or rated or not

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        for(int i =0; i<n; i++) {
            if(nums[i] > nums[(i+1) % n]) {
                count++;
            }
            if(count>1) return false;
        }
        return true;
    }
};