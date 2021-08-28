// Problem Link : 
// Time Complexity : O(max(s.size().t.size())

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int a=0;
        int b=0;
        for(auto i : s){
            a=a+i;
        }
        for(auto j : t){
            b=b+j;
        }
        return b-a;
        
    }
};
