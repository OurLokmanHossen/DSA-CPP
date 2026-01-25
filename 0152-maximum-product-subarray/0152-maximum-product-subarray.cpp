class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();

       int maxend = nums[0];
       int minend = nums[0];

       int ans = nums[0];

        for(int i = 1; i<n; i++)
        {
            int v1 = maxend * nums[i];
            int v2 = minend * nums[i];
            int v3 = nums[i];
            maxend = max({v1,v2,v3});
            minend = min({v1,v2, v3});
            ans = max(ans, max(maxend,minend));
        }

        return ans ;
        
    }
};