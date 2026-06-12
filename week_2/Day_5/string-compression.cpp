#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        int count = 1;
        int n = chars.size();
        for(int i = 1; i <= n; i++){
            if(i!=n && chars[i]==chars[i-1]){
                count++;
            }
            else{
                s.push_back(chars[i-1]);
                if(count!=1){
                    s += to_string(count);
                }
                count = 1;
            }
        }
        for(int i = 0; i < s.size(); i++){
            chars[i] = s[i];
        }
        return s.size();
    }
};

int main(){
    Solution s;
    vector<char> chars = {'a','a','b','b','c','c','c'};
    cout<<s.compress(chars)<<endl;
    return 0;
}