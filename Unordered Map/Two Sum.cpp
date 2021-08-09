// Problem link : 
// Time complexity : O(nums.size())

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
         
        unordered_map<int,int> mp;  // unordered map mp initialised , here vector element is key and it's index is value
        vector<int> res;   // res array to store index pairs
        
        for(int i=0;i<nums.size();i++){
            /* If we found target-nums[i] in the map beforehand than push_back both the indexes in res vector
               If do not than simply insert nums[i] as key and it's value in unordered map*/
            if(mp.count(target-nums[i])==true){
                res.push_back(mp[target-nums[i]]);
                res.push_back(i);
                return res;
            }else{
                mp[nums[i]]=i;
            }
        }
        
        return res;
    }
};
