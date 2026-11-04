class Solution {
public:
void solve(string &s, int open, int close, int n, vector<string>& ans) {
        
        // Base case
        if (s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }

        // Add opening bracket
        if (open < n) {
            s.push_back('(');
            solve(s, open + 1, close, n, ans);
            s.pop_back();  // Backtrack
        }

        // Add closing bracket
        if (close < open) {
            s.push_back(')');
            solve(s, open, close + 1, n, ans);
            s.pop_back();  // Backtrack
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";

        solve(s, 0, 0, n, ans);

        return ans;
        
    }
};