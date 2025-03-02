// The below solution has time complexity of O(2n) and space complexity of O(n) in worst case

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        for(int i =0;i<nums.size(); i++){
            if(nums[i]!= 0){
                temp.push_back(nums[i]);
            }
        }
        for(int i=0; i<temp.size(); i++){
            nums[i] = temp[i];
        }
        int nz= temp.size();
        for(int i = nz; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};