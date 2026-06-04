#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n!=r*c) return mat;

        vector<vector<int>> ans(r, vector<int> (c, 0));
        int a = 0;
        int b = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(b==c){
                   b=0;
                    a++;
                }
                ans[a][b++] = mat[i][j];
            }
        }
        return ans;
        
    }
};

int main(){
    Solution sol;
    vector<vector<int>> mat = {{1,2},{3,4}};
    int r = 1, c = 4;
    vector<vector<int>> ans = sol.matrixReshape(mat, r, c);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}