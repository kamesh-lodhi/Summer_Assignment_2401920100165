class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int n=s.size();
        int m=t.size();
        while(j<m&&i<n ){
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i==n;
    }
};
