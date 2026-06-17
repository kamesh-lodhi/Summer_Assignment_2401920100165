class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                string sub_string=s.substr(0,i);
                string temp="";
                int time=n/i;
                for(int j=1;j<=time;j++){
                    temp+=sub_string;
                }
                if(temp==s)
                return true;
            }
        }
        return false;
    }
};
