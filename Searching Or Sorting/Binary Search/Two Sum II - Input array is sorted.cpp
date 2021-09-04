class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res(2);
        int start=0,end=numbers.size()-1;
        
        while(start<end){
            if(numbers[start]+numbers[end]==target){
               res[0] = start+1;
               res[1] = end+1;
                break;
                
            }
            else if(numbers[start]+numbers[end]<target){
                start++;
            }
            else{
                end--;
            }
        }
        
        return res;
        
    }
};
