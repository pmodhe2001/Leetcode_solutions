//Problem link :  https://leetcode.com/problems/k-diff-pairs-in-an-array/
//Time Complexity : O(nums.size())

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
         set<pair<int,int>> pr; // set of pairs , because we want pairs to be unique
         unordered_map<int,bool> mp;  // key of map is vector element , value is true(present in vector)
        // we made unordered map because it takes O(1) time to search in it 
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            int temp=nums[i]-k;  // find temp
            if(mp.find(temp)!=mp.end()){ // search temp in map
                pr.insert(make_pair(nums[i],temp));  // if found insert pairs in set of pairs
            }
            mp[nums[i]]=true;  // mark true in map that nums[i] is present in vector
        }
        return pr.size(); // return size of set
    }
        
};
