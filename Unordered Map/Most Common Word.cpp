// Problem link : https://leetcode.com/problems/most-common-word/
// Time Complexity : 

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
        unordered_map<string,int> word_freq; // word(string) as key and it's frequency as value
        
        /*Traverse through the whole paragraph string*/
        for(int i=0;i<paragraph.size();){
            string s="";
            //push back in s if paragraph[i] is alphabetic , while pushing make it in lower-case
            while(i<paragraph.size() && isalpha(paragraph[i])){
                s.push_back(tolower(paragraph[i]));
                i++;
            }
            //if paragraph[i] is not alphabetic ignore it
            while(i<paragraph.size() && !isalpha(paragraph[i])){
                i++;
            }
            //increase the frequency if a word comes again
            word_freq[s]++;
        }
        // put value(frequency) as 0 for string present in banned vector of string
        for(auto i : banned){
            word_freq[i]=0;
        }
        //now check for the max frequency in value of unordered map and return it
        string ans="";
        int cnt=0;
        for(auto m : word_freq){
            if(m.second>cnt){
                ans=m.first;
                cnt=m.second;
            }
        }
        
        return ans;
    }
};
