class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int i=0;
     int n=nums.size();

     int count =0;
     for(int j=1;j<n;j++){
        while(j<n &&nums[i]==nums[j])
        j++;
        if (j < n) {
                i++;
                nums[i] = nums[j];
            }
        ;

     }
     return i+1;
    }
};
