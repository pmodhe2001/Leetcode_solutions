//Problem link : https://leetcode.com/problems/n-th-tribonacci-number/
//Time complexity : 


class Solution {
public:
    int tribonacci(int n) {
        
        if(n==0){
            return 0;      // according to definition 0th tribonacci no is 0
        }
        
        if(n==1 || n==2){
            return 1;          //according to definition 1st and 2nd tribonacci no are 1
        }
        
        int *ans=new int[n+1];   // creating array for storing ith tribonacci no
        
        /* Putting first 3 values in array according to definition*/
        ans[0]=0;  
        ans[1]=1;
        ans[2]=1;
        
        /*Calculating ith tribonacci by adding last three values using for loop*/
        for(int i=3;i<=n;i++){
            ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
        }
        
        return ans[n];  // returning nth tribonacci no if n > 2
    }
};
