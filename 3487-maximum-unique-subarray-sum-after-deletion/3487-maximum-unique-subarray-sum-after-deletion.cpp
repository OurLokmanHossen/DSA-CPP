class Solution {
public:
    int maxSum(vector<int>& nums) {

        int n = nums.size();
       int negMax = INT_MIN;
       set<int> st;
        for(int i = 0; i<n; i++)
        {
            if(nums[i] > 0)
            {
                st.insert(nums[i]);
            }
            else{
                negMax = max(nums[i], negMax);
            }
        }

        if(st.size() == 0) return negMax;
        else 
        {
            int sum = 0;
            for(auto it : st)
            {
                sum += it;
            }
            return sum ;
        }  
        
    }
};