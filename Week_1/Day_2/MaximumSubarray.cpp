class Solution {
public:
//kadane mein -ve ke liye work nhi karegi
//this is optimal for max subarray yaad rakhio
    int maxSubArray(vector<int>& nums) {
       int maxsub=nums[0],currsum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(currsum+nums[i]>nums[i]){
                currsum=currsum+nums[i];
            }
            else{
                currsum=nums[i];
            }
            maxsub=max(maxsub,currsum);
        }
        return maxsub ;
    }
};
