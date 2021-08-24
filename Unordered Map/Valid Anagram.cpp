// Problem Link : https://leetcode.com/problems/valid-anagram/
// Time Complexity : 

class Solution {
public:
    bool isAnagram(string s, string t) {
   
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mp[t[i]]--;
        }
        for(auto i : mp){
            if(i.second!=0){
                return false;
            }
        }
        return true;
    }
};
