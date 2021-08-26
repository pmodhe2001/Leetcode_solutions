// Problem link : https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        long long int start=0,end=x,mid,ans;
        
        while(start<=end){
            mid=(start+end)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid < x){
                start=mid+1;
                ans=mid;
            }
            else if(mid*mid > x){
                end=mid-1;
            }
        }
        return ans;
    }
};
