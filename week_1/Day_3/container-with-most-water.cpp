#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
     int l = 0;
     int r = height.size() - 1;
     int area = 0;
     while(l < r){
        int carea = min(height[l], height[r])*(r-l);
        area = max(area, carea);
        if(height[l] >= height[r]) r--;
        else l++;
     }   
     return area;
    }
};

int main() {
    Solution sol;
    vector<int> height = {1, 8, 6, 2, 5, 12, 78, 90, 11, 15, 4, 8, 3, 7};
    int result = sol.maxArea(height);
    cout << "Maximum area: " << result << endl;
    return 0;
}