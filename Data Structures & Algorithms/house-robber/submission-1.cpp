class Solution {
public:
    vector<int>dp;

    int rob(vector<int>& nums) {
        dp.resize(nums.size(),-1);
        return solve(nums,0);
    }
    int solve(vector<int>& nums, int i){
        
        if(i>=nums.size()) return 0;

        if(dp[i]!= -1) return dp[i];

        int take = nums[i] + solve(nums, i+2);
        int nottake = solve(nums, i+1);

        dp[i] = max(take, nottake);
        return dp[i];
    }
    

    
};
