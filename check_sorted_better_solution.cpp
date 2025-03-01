//This approach uses Moore's algorithm
it has Time Complexity of O(n) and space complexity of O(1).

class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        for (int i=1 ; i< nums.size();i++){
            if (nums[i] < nums[i - 1]){
                cnt++;
            }
            }
            if(nums[nums.size()-1] > nums[0]){
                cnt++;
        }
        return cnt<=1;
    }
};