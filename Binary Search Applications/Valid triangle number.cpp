class Solution {
public:
    int bs(vector<int> &nums,int start,int n,int target){
        int s=start;int e=n;
        while(s<e){
            int mid=s+(e-s)/2;
            
            if(nums[mid]<target){
                s=mid+1;
            }else{
                e=mid;
            }
        }
        return s;
    }
    int triangleNumber(vector<int>& nums) {
        int n=nums.size(),count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                int target=nums[i]+nums[j];
                int index=bs(nums,j+1,n,target);
                count+=index - 1 - j;   
            }
        }
        return count;
    }
};
