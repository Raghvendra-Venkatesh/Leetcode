class Solution {
public:
    vector<string> ans;
    void solve(int n,int open,int close,string &current){
        if(current.length()==2*n){
            ans.push_back(current);
            return;
        }
        if(open<n){
        current.push_back('(');
        solve(n,open+1,close,current);
        current.pop_back();
        }
        if(close<open){
        current.push_back(')');
        solve(n,open,close+1,current);
        current.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string current="";
        solve(n,0,0,current);
        return ans;
    }
};