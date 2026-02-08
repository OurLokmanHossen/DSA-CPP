class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int n = nums.size();

        int res = 0, cs = 0;

        unordered_map<int,int> mp;

        mp[0] = 1;

        for(int i = 0; i<n; i++)
        {
          cs += nums[i];

          int remaining_sum = cs - goal;

          if(mp.find(remaining_sum) != mp.end())
          {
            res += mp[remaining_sum];
          }

          mp[cs]++;

          
        }

        return res;
        
    }
};