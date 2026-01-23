class Solution {
public:
    int maximumDifference(vector<int>& nums) {

        int n = nums.size();
        int mn = nums[0]; // nums[i]

        int mxdif = -1;
        for(int j = 1; j<n; j++)
        {
            if(nums[j] > mn)
            {
                mxdif = max(mxdif, nums[j] - mn);
            }else
            {
                mn = nums[j];
            }
        }
        return mxdif;

        
    }
};