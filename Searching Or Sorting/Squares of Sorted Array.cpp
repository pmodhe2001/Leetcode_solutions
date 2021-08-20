// Problem link : https://leetcode.com/problems/squares-of-a-sorted-array/
// Time Complexity : O(nlogn)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];    // putting squares of their element
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
