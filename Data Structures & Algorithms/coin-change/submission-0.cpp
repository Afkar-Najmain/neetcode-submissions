class Solution {
public:
    vector<vector<int>>dp;
    int solve(vector<int>& coins, int i, int amount) {

        if(amount == 0) return 0;

        if(i < 0) return 1e9; // impossible

        if(dp[i][amount]!=-1) return dp[i][amount];
        int ans;

        if(coins[i] <= amount) {
            int take = 1 + solve(coins, i, amount - coins[i]);
            int nottake = solve(coins, i - 1, amount);

           ans  = min(take, nottake);
        }
          else{
           ans = solve(coins, i - 1, amount);}

           return dp[i][amount] = ans;
    }

    int coinChange(vector<int>& coins, int amount) {
        dp.assign(coins.size(), vector<int>(amount +1 , -1));

        int ans = solve(coins, coins.size() - 1, amount);

        return (ans >= 1e9) ? -1 : ans;
    }
};