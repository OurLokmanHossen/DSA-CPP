class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

       int n = nums.size();

       int ts = 0;

       for(int i = 0; i<n; i++) ts += nums[i];

       int ls = 0;

       vector<int> dif(n);

       for(int i = 0; i<n; i++) 
       {
         int cs = nums[i];
          int rs = ts - ls - cs;

          nums[i] = abs(rs - ls);

           ls += cs;

          


       }
       return nums;

       }
    
    
};