class Solution {
public:
    vector<int>dp;
    vector<int>dp1;

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        dp.resize(nums.size(),-1);
        dp1.resize(nums.size(),-1);

        return max( solve(nums,0, nums.size()-1,dp),solve(nums,1, nums.size(),dp1));
    }
    int solve(vector<int>& nums, int i, int k,vector<int>& dp ){
        
        if(i>=k) return 0;

        if(dp[i]!= -1) return dp[i];

        int take = nums[i] + solve(nums, i+2 , k , dp);
        int nottake = solve(nums, i+1 , k ,dp);

        dp[i] = max(take, nottake);
        return dp[i];
    }
    

    
};
