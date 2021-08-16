// Problem link : https://leetcode.com/problems/contains-duplicate-ii/
// Time Complexity : O(nums.size())

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp; // In this map key is vector element and it's index is value
        for(int i=0;i<nums.size();i++){
            /*
                 Inside if condition there is find function which searchs for duplicate element  in O(1) time and condition to                      check for abs(i - j) <= k. If both satisfies return true, otherwise after ending the loop we will return false
            */
            if(mp.find(nums[i])!=mp.end() && abs(mp[nums[i]]-i)<=k){  
                 return true;
            }
            mp[nums[i]]=i; // putting key as element and it's index as value
        }
        return false;
        
    }
};
