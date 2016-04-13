//https://www.codechef.com/problems/INTEST
//Author - Sajal Agrawal
//@sajalagrawal

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,k,i,c,count=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
       scanf("%d",&c);
       if(c%k==0)
        count++;
    }
    printf("%d",count);
    return 0;
}
 
