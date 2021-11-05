class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
            int key=nums1[i];
            for(int j=0;j<n2;j++){
                if(nums2[j]==key){
                    int count=0;
                    for(int k=j;k<n2;k++){
                        if(nums2[k]>key){
                            count=nums2[k];
                            break;
                        }
                    }
                    if(count==0){
                        res.push_back(-1);
                    }else{
                        res.push_back(count);
                    }
                }
            }
        }
        return res;
    }
};
