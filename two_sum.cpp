// This is a solution with time complexity O(n^2) and space complexityof O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0; i<nums.size(); i++) {
            for(int j =i+1; j<nums.size(); j++){
                if( i ==j)continue;
                if(nums[i] + nums[j] == target)
                return {i, j};
            }
        }
        return {-1, -1};
    }
};

// This is a better solution with time complexity of O(n) and space complexity of O(nlogn)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for(int i =0; i<n; i++) {
            int a = nums[i];
            int more = target -a;
            if(mpp.find(more) != mpp.end()){
                return {mpp[more], i};
            }
            mpp[a] = i;
        }
        return{-1, -1};
    }
};