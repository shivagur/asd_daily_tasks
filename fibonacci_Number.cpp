class Solution {
public:
    int fib(int n) {

        //base case
        if(n==0|| n==1){
            return n;
        }
        //RR
        int ans = fib(n-1)+fib(n-2);

        //processing step
        return ans;
    }
};
