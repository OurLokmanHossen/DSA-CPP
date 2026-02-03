class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int n = nums.size();

        int sum1 = 0, sum2 = 0, total_sum = 0;
        int min_s = INT_MAX;
        int max_s = INT_MIN;


        // for(int i = 0; i<n; i++)
        // {
        //     total_sum += nums[i];
        //  }

        for(int i = 0; i<n; i++)
       {

         total_sum += nums[i];

           sum1 += nums[i];
           sum2 += nums[i];

           max_s = max(sum1, max_s);
           min_s = min(sum2, min_s);

           if(sum1 <= 0) sum1 = 0;
           if(sum2 >= 0) sum2 = 0;
            
       }
        
        if(max_s < 0) return max_s;

        return max(max_s, (total_sum - min_s));
    }
};