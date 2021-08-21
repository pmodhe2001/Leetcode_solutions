// Problem link : https://leetcode.com/problems/check-if-the-sentence-is-pangram/
// Time Complexity :
// Space Complexity : 

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> mp(sentence.begin(),sentence.end());  // set will only take unique elements
        return mp.size()==26;  // shorthand way tp return true or false
    }
};
