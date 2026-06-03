class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int n=r;
        vector<int>ans(r+1);
        while(l<=r){
        if(abs(nums[r])>=abs(nums[l])){
        ans[n--]=nums[r]*nums[r];
        r--;
        }
        else{
            ans[n--]=nums[l]*nums[l];
            l++;        
        }
        }
        return ans;
    }
};
