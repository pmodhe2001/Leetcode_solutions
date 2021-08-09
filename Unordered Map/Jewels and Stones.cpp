// Problem link : https://leetcode.com/problems/jewels-and-stones/
// Time Complexity : O(max(jewels.size(),stones.size()))

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int count=0;   // to count no of jewels in stones
        unordered_map<char,int> mp;  // unordered map to store character of jewels as key and its frequency as value
        
        // for loop to store jewels character as key and its frequency as value in unordered map mp
        for(int i=0;i<jewels.size();i++){
            mp[jewels[i]]++;
        }
        
        // for loop to check frequency of  character in stones inside unordered_map mp 
        // if frequency is greater than 0 , increment count by 1
        for(int i=0;i<stones.size();i++){
            if(mp[stones[i]]>0){
                count+=1;
            }
        }
        
        return count;
    }
};
