// This solution has time complexity of O(n^2) and space complexity of O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int i=0; i<nums.size();i++){
            int count =0;
            for(int j = 0; j<nums.size(); j++){
                if(nums[i]== nums[j]){
                    count++;
                }
            }
            if(count > nums.size()/2){
                return nums[i];
            }
        }
        return -1;
    }
};

// his solution has time complexity of O(n) and space complexity of O(nlogn)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>mpp;
        for(int i = 0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto it: mpp){
            if(it.second > nums.size()/ 2){
                return it.first;
            }
        }
        return -1;
    }
};