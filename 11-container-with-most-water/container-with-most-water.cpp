class Solution {
public:
    int maxArea(vector<int>& height) {
        int arraySize = height.size();
        int leftIndex = 0;
        int rightIndex = arraySize -1;
        int maximumArea =0;
        while(leftIndex < rightIndex){
            int width = rightIndex - leftIndex;
            int containerHeight = min(height[leftIndex], height[rightIndex]);
            int currentArea = width * containerHeight;
            maximumArea = max(maximumArea, currentArea);
            if(height[leftIndex]< height[rightIndex]){
                leftIndex++;
            }
            else{
                rightIndex--;
            }
        }
        return maximumArea;
    }
};