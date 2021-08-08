// Problem link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Time Complexity : O(nums.size()-1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                count++;
            }
            else{
                nums[i-count]=nums[i];
            }
        }
        return nums.size()-count;
    }
};
