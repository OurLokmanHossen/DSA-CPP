class Solution {
public:
    int minimumCost(vector<int>& nums) {

        int n = nums.size();

        int start = nums[0];

       sort(nums.begin()+1, nums.end());

       return start + nums[1] + nums[2];
        
    }
};