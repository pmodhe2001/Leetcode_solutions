class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix;
        int pro=1;
        for(int i=0;i<n;i++){
            pro=pro*nums[i];
            prefix.push_back(pro);
        }
        int right_product=1;
        for(int i=n-1;i>0;i--){
            prefix[i]=prefix[i-1]*right_product;
            right_product=right_product*nums[i];
        }
        prefix[0]=right_product;
        return prefix;
    }
};
