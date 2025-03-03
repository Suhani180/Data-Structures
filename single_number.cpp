//This is brute force solution with time complexity of O(n^2)and space complexity of O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i =0; i<n;i++) {
            int num = nums[i];
            int cnt =0;
            for(int j =0; j<n; j++) {
                if(nums[j] == num){
                    cnt++;
                }
            }
            if(cnt ==1){
                    return num;
                }
        }
        return -1;
    }
};

//This is a better solution with time complexity of O(n) and space complexity of O(nlogn)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<long long , int> mpp;
        int n = nums.size();
        for(int i =0; i<n; i++) {
            mpp[nums[i]]++;
        }
        for(auto it: mpp) {
            if(it.second == 1){
                return it.first;
            }
        }
        return -1;
    }
};

//This is the ebst solution with time complexity of )(n) and space complexity of O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<long long , int> mpp;
        int XOR =0;
        for(int i =0; i<nums.size(); i++) {
            XOR = XOR^nums[i];
        }
        return XOR;
    }
};