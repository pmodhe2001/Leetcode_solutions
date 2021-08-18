// Problem link : https://leetcode.com/problems/sort-colors/
// Time Complexity : O(nums.size())
// Space Complexity : O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size=nums.size();
        
      /*Initialising indexes from front and back and then swap elements according to value contained in them*/
        int low=0;
        int mid=0;
        int high=size-1;
        
        while(mid<=high){
            
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;mid++;
            }
            else if (nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
