//https://www.codechef.com/problems/FLOW016
//Author - Sajal Agrawal
//@sajalagrawal

#include <stdio.h>
int l(int,int);
int h(int,int,int);
int main()
{
 
    int a,b,t,lcm;
    scanf("%d",&t);
 
    while(t--){
            scanf("%d%d",&a,&b);
            printf("%d %d\n",gcd(a,b),a*b/gcd(a,b));
    }
 
    return 0;
}
 
int gcd(int a,int b){
    int max=a>b?a:b;
    int min=a+b-max;
    int r=max%min;
    while(r!=0){
		max=min;
		min=r;
		r=max%min;
		}
    return min;
}
