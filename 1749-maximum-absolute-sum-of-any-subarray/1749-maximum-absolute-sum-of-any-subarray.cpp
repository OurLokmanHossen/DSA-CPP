class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int n = nums.size();
       
       int  cur_sum1 = 0, cur_sum2 = 0;

        int mx = INT_MIN;
        int mn = INT_MAX;
        

        for(int i = 0; i<n; i++)
        {
            cur_sum1 += nums[i];
            cur_sum2 += nums[i];
            mx = max(cur_sum1, mx);
            mn = min(cur_sum2, mn);

            if(cur_sum1 <= 0) cur_sum1 = 0;
            if(cur_sum2 >= 0) cur_sum2 = 0;
            
        }

        return max(abs(mx), abs(mn));
    }
};