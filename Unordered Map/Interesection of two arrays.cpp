// Problem link : https://leetcode.com/problems/intersection-of-two-arrays/
// Time Complexity :
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      
            vector<int> ans;  // store intersecting elements in this vector
            set<int> st(nums1.begin(),nums1.end());  // a set which contains unique nums1 vector elements
            
            for(int i=0;i<nums2.size();i++){
                if(st.find(nums2[i])!=st.end()){  // to check if nums2 vector are present in set
                    ans.push_back(nums2[i]);      // if yes then push back in ans vector
                    st.erase(nums2[i]);           // and remove it from set
                }
            }
      
        return ans;
    }
};
