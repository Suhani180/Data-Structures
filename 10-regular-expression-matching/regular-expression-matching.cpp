class Solution {
public:

    bool solve(int i, int j, string &s, string &p){
        if(j == p.size()){
            return i == s.size();
        }

        bool match = (i <s.size() && (s[i] == p[j] || p[j] == '.'));
        if(j +1 < p.size() && p[j+1] == '*'){
            return solve(i, j+2, s,p) || (match && solve(i+1, j, s, p));
        }
        if (match){
            return solve(i+1, j+1, s,p);
        }
        return false;
    }

    bool isMatch(string s, string p) {
        return solve(0, 0,s, p);
    }
};