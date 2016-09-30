//https://www.codechef.com/problems/MSTEP
//Author - Sajal Agrawal
//@sajalagrawal

#include <stdio.h>
#include <math.h>     /* abs */
int x[250001],y[250001];   //as n<=500 n*n<=250000
int main() {
  int t,n,value,step,i,j;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    step=0;

    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
        scanf("%d",&value);
        x[value]=i;
        y[value]=j;
      }
    }
    for(i=2;i<=n*n;i++){
      step+=fabs(x[i]-x[i-1])+fabs(y[i]-y[i-1]);
    }
    printf("%d\n",step);
  }
  return 0;
} 
