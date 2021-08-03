// Problem link : https://leetcode.com/problems/fibonacci-number/
// Time Complexity : O(n)

class Solution {
public:    
    int fib(int n) {
        
        if(n==0||n==1){     // Base Case
            return n;      
        }
        
        int ans[n+1];      // answer array
        
        ans[0]=0;
        ans[1]=1;
        
        for(int i=2;i<=n;i++){
            ans[i]=ans[i-1]+ans[i-2];   // ith fibonacci no calculation
        }
        
        return ans[n];
  
    }
};
