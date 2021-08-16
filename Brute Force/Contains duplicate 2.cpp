// Problem link : https://leetcode.com/problems/contains-duplicate-ii/
// Time Complexity : (O(nums.size()^2))
// This approach will give time limit exceed because of constraints given in the problem.

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){  // first moving on nums[i]
            for(int j=0;j<nums.size()-1;j++){  // for every nums[i] check if it is equal to nums[j] and abs(i-j)<=k
                if(nums[i]==nums[j] && abs(i-j)<=k){
                    return true;              // if yes return true
                }
            }
        }
        return false; // if it does not return true it will return false
    }
};
