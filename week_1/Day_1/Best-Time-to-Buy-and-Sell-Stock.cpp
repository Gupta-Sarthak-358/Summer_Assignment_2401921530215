#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int bought = prices[0];
        int max_profit = 0;

        for(int i = 1; i < n; i++){
            if(bought < prices[i]){
                int profit = prices[i] - bought;
                max_profit = max(profit, max_profit);
            }
            bought = min(prices[i], bought);
        }
        return max_profit;
    }
};

int main(){
    Solution sol;
    vector<int> prices = {7, 1, 5, 6, 2, 1, 5, 7,8, 5, 2,1 ,4,6 ,7, 8, 9, 10};
    cout << sol.maxProfit(prices) << endl;
    return 0;
}