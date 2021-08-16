// Problem link : https://leetcode.com/problems/contains-duplicate/
// Time Complexity : O(n*logn) here n is size of input vector array

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
        sort(nums.begin(),nums.end());  // first sort the array using sort function 
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){ // then check for consecutive same elements if get return true 
                return true;
            }
        }
        return false;
        
      
    }
};
