class Solution {
public:
    int strStr(string haystack, string needle) {
         if (needle.empty()) return 0;

        int n = haystack.size();
        int m = needle.size();

        for(int i=0;i<=n-m;i++){
           string occur=haystack.substr(i,m);
           if(occur==needle)
           return i;
        }
        return -1;
    }
};
