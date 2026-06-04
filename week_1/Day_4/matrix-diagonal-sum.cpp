#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        int r = n-1;
        for(int i = 0; i < n; i++){
            sum += (mat[i][i] + mat[i][r--]);
        }
        if(n&1) sum -= mat[n/2][n/2];
        return sum;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> mat = {{1,1,1,1},
                                {1,1,1,1},
                                {1,1,1,1},
                                {1,1,1,1}};
    cout << sol.diagonalSum(mat) << endl;
    return 0;
}