class Solution {
public:
    bool isPalindrome(string s) {
        //issalnum and tolower
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(isalnum(s[i])&&isalnum(s[j]))
            {
                if(tolower(s[i])==tolower(s[j]))
                {
                    i++;
                    j--;
                }
                else{
                    return false;
                }
            }
            else if(!(isalnum(s[i])))
            i++;
            else
            j--;
        }
        return true;
    }
};
