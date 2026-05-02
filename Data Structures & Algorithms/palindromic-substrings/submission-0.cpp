class Solution {
public:
    vector<vector<int>> a;
    bool isP(string &s , int i ,int j){
       
       if(i>=j) return a[i][j] =1;
       if(a[i][j]!=-1) return a[i][j];

       if( s[i] == s[j]) return a[i][j] = isP(s, i+1,j-1);

       else return a[i][j] = 0;
        
    }
    int countSubstrings(string s) {
        int n = s.size();
        a = vector<vector<int>>(n,vector<int>(n,-1));
        int t =0;
        for(int i = 0; i<s.size();i++){
            for(int j = i; j<s.size(); j++){
                if(isP(s,i,j) == true) t= t+1;
            }
        }
        return t;


        
    }
};
