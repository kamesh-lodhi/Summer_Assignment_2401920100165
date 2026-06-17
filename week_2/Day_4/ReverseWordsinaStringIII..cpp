class Solution {
public:
void add(string &ans,string word){
    string rev="";
    for(int i=0;i<word.size();i++){
        rev=word[i]+rev;
    }
    ans=ans+rev+" ";
}
    string reverseWords(string s) {
        string word;
        int n=s.size();
        string ans="";
        stringstream ss(s);
        while(ss>>word){
        add(ans,word);
        }
        
        return ans.substr(0,n);
    }
};
