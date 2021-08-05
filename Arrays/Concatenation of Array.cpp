// Problem Link : https://leetcode.com/problems/concatenation-of-array/
// Time Complexity : O(nums.size())

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n=nums.size();   // length of nums vector
    
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);       // loop for 0 to n , it push back value of nums[i] in vector nums
        }
        
        return nums;  // return nums vector
    }
};
