// Problem Link : https://leetcode.com/problems/count-the-number-of-consistent-strings/
// Time Complexity :

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int count=0;  // number of consistent strings in array
        
        unordered_map <char,bool> mp;   // character of string as key and boolean true as value
        
        
        // Using unordered map mp on allowed string and putting characters present in allowed as key
        for(int i=0;i<allowed.size();i++){
            mp[allowed[i]]=true;
        }
        
        // traversing the words string vector
        for(auto i : words){
            
            bool flag=true;
            
            // traversing elements of words string vector
            for(auto j : i){
                
                // if jth element of words[i] is not present then mark flag as false and move on to words[i+1]
                if(mp.find(j)==mp.end()){
                    flag=false;
                    break;
                }
                
            }
            
            // if flag remains true increment count by 1
            if(flag==true){
                count+=1;
            }
            
        }
        
        return count;
        
    }
};
