class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(256,-1);
        int left = 0, answer =0;
        for(int right =0; right<s.size(); right++){
            unsigned char c = s[right];
            if(lastSeen[c] >= left){
                left =lastSeen[c] + 1;
            }
            lastSeen[c] = right;
            answer = max(answer, right-left +1);
        }
        return answer;
    }
};