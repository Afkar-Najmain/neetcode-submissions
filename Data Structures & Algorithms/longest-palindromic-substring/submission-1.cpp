class Solution {
public:
    bool isP(string &s, int i, int j){
        if(i>=j) return true;
        if(s[i] == s[j]) return isP(s, i+1 , j-1);
        else return false; 
    }
    string longestPalindrome(string s) {

        int n = s.size();
        int maxi = INT_MIN;
        int start = 0;
        for(int i =0; i< n; i++){
            for(int j = i; j<n; j++){
               if( isP(s,i,j) == true){
                if(maxi<(j-i+1)){
                    maxi = j-i+1;
                    start = i;
                }
               }
            }
        }
       return s.substr(start,maxi);
    }
};