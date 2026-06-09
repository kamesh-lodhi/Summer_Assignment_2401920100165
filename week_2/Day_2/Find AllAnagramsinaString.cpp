class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>sfreq(26,0),pfreq(26,0);
        vector<int>ans;
        for(char ch:p){
            pfreq[ch-'a']++;
        }
        for(int i=0;i<s.size();i++){
            sfreq[s[i]-'a']++;
            if(i>=p.size())
            sfreq[s[i-p.size()]-'a']--;
            if(pfreq==sfreq)
            ans.push_back(i-p.size()+1);
        }
        return ans;
    }
};
