class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),res=-1;
        unordered_map<int,int> mp;
        for(int i=0;i<n+1;i++){
            mp[i]=0;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<mp.size();i++){
            if(mp[i]==0){
                res=i;
            }
        }
        return res;
    }
};
