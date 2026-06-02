class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        int n;  
        for(int i=0;i<nums.size();i++){
            n=nums[i];
        if(st.count(n))return true;
        st.insert(nums[i]);
        }
        return false;
    }
};
