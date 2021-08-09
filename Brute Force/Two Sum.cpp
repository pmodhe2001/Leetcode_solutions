// Problem Link : https://leetcode.com/problems/two-sum/
// Time Complexity : O((nums.size())^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res; // we will store pairs in vector res
       
       /* First for loop for traversing the vector second for loop for searching the second pair through the remaining vector if it exists push_back i and j into res*/
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        
        return res;
    }
};
