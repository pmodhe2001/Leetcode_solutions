// Problem link : https://leetcode.com/problems/sum-of-unique-elements/
// Time Complexity : O(nums.size())

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int sum=0; // we will store unique sum here
        
        unordered_map<int,int> mp; // key as vector element and value as their frequency
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;    // putting key and value in hashtable
        }
        
        for(auto i : mp){
            if(i.second==1){   // checking for frequency 1 and adding it in sum
                sum+=i.first;
            }
        }
        return sum;
    }
};
