class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int m = numRows;
        for(int i=1;i<=m;i++){
            vector<int>a(i);
            ans.push_back(a);
            }
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<=i ; j++){
                if(j==0 || i==j){
                    ans[i][j]=1;
                }
                else{
                    ans[i][j] = ans[i-1][j]+ans[i-1][j-1];
                }
            }
        }
        return ans;
        
    }
};