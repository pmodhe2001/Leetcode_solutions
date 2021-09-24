class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int even=0;
            int key=nums[i];
            while(key!=0){
                int last=key%10;
                even+=1;
                key=key/10;
            }
            if(even%2==0){
                count+=1;
            }
            even=0;
        }
        return count;
    }
};
