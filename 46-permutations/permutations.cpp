class Solution {
public:

    void generate(vector<int>& nums, vector<bool>& used, vector<int>& current, vector<vector<int>>& answer){
        if(current.size() == nums.size()){
            answer.push_back(current);
            return;
        }
        for(int i =0; i< nums.size(); i++){
            if(used[i])
                continue;
            used[i] = true;
            current.push_back(nums[i]);
            generate(nums, used, current, answer);
            current.pop_back();
            used[i] =false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> current;
        vector<bool> used(nums.size(), false);
        generate(nums, used, current, answer);
        return answer;
    }
};