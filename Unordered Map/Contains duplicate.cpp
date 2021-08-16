// Problem link : 
// Time Complexity : O(nums.size())

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
        unordered_map<int,int> mp;  // creating a map mp , here vector element is key and frequency is its value
      
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;        // mapping all the values of array with their frequency
        }
       
        for(auto i : mp){ // iterating the map
            if(i.second>1){   // if frequency of any element is greater than 1 , return true
                return true;
            }
        }
        return false;
     
};
