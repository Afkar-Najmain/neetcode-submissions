class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int prefix = 1;
        int suffix = 1;
        int maxi = INT_MIN;
        
       for(int x = 0; x<nums.size(); x++){
        if (prefix == 0) prefix = 1;
        if (suffix == 0) suffix = 1;
        prefix = prefix*nums[x];
        suffix = suffix*nums[(nums.size()-x-1)];

        maxi = max(maxi,max(prefix, suffix));

       }
       return maxi;
        
    }
};
