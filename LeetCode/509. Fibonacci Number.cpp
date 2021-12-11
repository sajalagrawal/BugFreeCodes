#define ll long long

class Solution {
    ll fibo[35]={0,};
public:
    int fib(int n) {
        fibo[0]=0;
        fibo[1]=1;
        if(n==0)return 0;
        return solve(n);
    }
    
    ll solve(int n){
        if(n==0){
            return 0;
        }
        if(fibo[n]!=0){
            return fibo[n];
        }
        return solve(n-2)+solve(n-1);
    }
};
