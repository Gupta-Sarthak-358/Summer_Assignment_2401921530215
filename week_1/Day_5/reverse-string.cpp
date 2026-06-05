#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for(int i = 0; i < n/2; i++){
            swap(s[i],s[n-i-1]);
        }
    }
};

int main(){
    Solution s;
    vector<char> str = {'P', 'I', 'K', 'A', 'C', 'H', 'U'};
    s.reverseString(str);
    for(auto c : str){
        cout << c << " ";
    }
    return 0;
}