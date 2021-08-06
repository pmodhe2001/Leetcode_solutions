// Problem Link : https://leetcode.com/problems/build-array-from-permutation/
// Time Complexity : O(nums.size())

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[nums[i]];     // inserting value inside ans vector according to question 
        }
        return ans;
    }
};
