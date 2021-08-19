// Problem link : https://leetcode.com/problems/move-zeroes/
// Time Complexity : O(nums.size())
// Space Complexity : O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[index]);
                index++;
            }
        }
    }
};
