// Probelem link : https://leetcode.com/problems/climbing-stairs/


class Solution {
public:
    int climbStairs(int n) {
        
         long long int *ans= new long long int[n+1]; // creating ans array dynamically
        
        if(n<=2){
            return n;    // returning ans if n  < 3
        }
        
        ans[0]=0;
        ans[1]=1;   // storing initital values in array
        ans[2]=2;

        
        for(int i=3;i<=n;i++){
            ans[i]=ans[i-1]+ans[i-2];             // iteratively counting values after index 2
        }
        
        return ans[n];                           // returning ans if n > 2
    }
};
