class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n + 1);
        for(int i = 0; i<=n; i++){
            int sum = 0;
            int temp = i;
            while(temp!=0){
               sum += (temp%2);
               temp /=2;
            }
            v[i] = sum;

        }

        return v;
        
    }
};
