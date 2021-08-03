
//Time complexity : O(2^n)
//Problem link : https://leetcode.com/problems/fibonacci-number/

class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1){  
            return n;              //base case
        }
        // recursive calls
        int a=fib(n-1);
        int b=fib(n-2);
        // small calculation
        return a+b;
    }
};
