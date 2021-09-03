class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       unordered_map<int,int> mp;
       vector<int> res(2);
       for(int i = 0;i<nums.size();i++){
           mp[nums[i]]++;
       } 
       for(int i=1;i<=nums.size();i++){
           if(mp[i]>1){
                res[0]=i;
           }
          else if(mp[i]==0){
              res[1]=i;
          }
       }
        return res;
    }
};
