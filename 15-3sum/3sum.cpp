class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int arraySize = nums.size();
        vector<vector<int>> triplets;
        sort(nums.begin(), nums.end());
        for(int firstIndex = 0; firstIndex< arraySize -2; firstIndex++){
            if(firstIndex > 0 && nums[firstIndex] == nums[firstIndex - 1]){
                continue;
            }
            int leftIndex = firstIndex +1;
            int rightIndex = arraySize -1;
            while(leftIndex < rightIndex){
                long long currentSum = (long long)nums[firstIndex] + nums[leftIndex]+ nums[rightIndex];
                if (currentSum <0){
                    leftIndex++;
                }
                else if(currentSum >0){
                    rightIndex--;
                }
                else{
                    triplets.push_back({nums[firstIndex], nums[leftIndex],nums[rightIndex]});
                    leftIndex++;
                    rightIndex--;
                    while(leftIndex < rightIndex && nums[leftIndex] == nums[leftIndex - 1]){
                        leftIndex++;
                    }
                    while(leftIndex < rightIndex && nums[leftIndex] == nums[rightIndex +1]){
                        rightIndex--;
                    }
                }
            }
        }
        return triplets;
    }
};