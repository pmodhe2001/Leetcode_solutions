//Problem link : https://leetcode.com/problems/intersection-of-two-arrays-ii/
//Time Complexity : 

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mp; // unordered map mp, here key is num1 array elements and value is it's frequency
        vector<int> ans;          // ans vector to store intersection elements
        
        // Loop for storing nums1 elements and their frequency in map mp
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        
        //loop for checking if nums2 vector elements are present in map than push into array ans decrease their frequency by 1
        for(int i=0;i<nums2.size();i++){
            if(mp[nums2[i]]>0){
                 mp[nums2[i]]--;
                ans.push_back(nums2[i]);
               
            }
            
        }
        
        //return ans vector
        return ans;
        
    }
};
