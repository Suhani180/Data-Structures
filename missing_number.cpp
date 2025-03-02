// This is a brute force solution with time complexity O(n^2) in worst case and space complexity of O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i =0; i<=nums.size(); i++) {
            int flag=0;
            for(int j =0; j<nums.size(); j++) {
                if(nums[j] == i){
                    flag = 1;
                    break;
                }
            }
            if(flag ==0) {
                return i;
            }
        }
        return nums.size();
    }
};


// This is a better approach with time complexity O(n) and space complexity of O(n)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n+1, 0);
        for(int i =0; i<n; i++) {
            hash[nums[i]]++;
        }
        for(int i =0; i<=n; i++) {
            if(hash[i] == 0) {
                return i;
            }
        }
        return -1;
    }
};

//This is an optimal solution with time complexity of O(n) and space complexity of O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR1 =0, XOR2 =0;
        int n = nums.size();
        for(int i =0; i<n;i++) {
            XOR2 = XOR2^nums[i];
            XOR1 = XOR1^(i+1);
        }
        return XOR1^XOR2;
    }
};