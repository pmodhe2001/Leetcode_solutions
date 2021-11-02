class Solution {
public:
    int bs(vector<int> &nums,int target){
        int st=0,end=nums.size()-1;
        while(st<end){
            int mid = st + (end - st) / 2;
		    if (nums[mid] >= target)
		    {
			     end = mid;
		     }
		    else
		    {
			st = mid + 1;
		    }
        }
        return st;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> sortednums(n);
        for(int i=0;i<n;i++){
            sortednums[i]=nums[i];
        }
        sort(sortednums.begin(),sortednums.end());
        vector<int> res;
        for(int i=0;i<n;i++){
            res.push_back(bs(sortednums,nums[i]));
        }
        return res;
       
    }
};
