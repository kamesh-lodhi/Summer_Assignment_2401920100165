class Solution {
    void find(int n,int l,int r,vector<string>&ans,string &temp){
        if(l+r==2*n)
        {
            ans.push_back(temp);
            return;
        }
        if(l<n){
            temp.push_back('(');
            find(n,l+1,r,ans,temp);
            temp.pop_back();
        }
        if(r<l){
            temp.push_back(')');
            find(n,l,r+1,ans,temp);
            temp.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        int l=0,r=0;
        find(n,l,r,ans,temp);
        return ans;
    }
};
