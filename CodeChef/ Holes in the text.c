//https://www.codechef.com/problems/HOLES
//Author - Sajal Agrawal
//@sajalagrawal

#include <stdio.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    int holes[t];
    char str[110];
    for(i=0;i<t;i++){
    scanf("%s",str);
    j=0;
    holes[i]=0;
    while(str[j]!='\0'){
        if(str[j]=='A' || str[j]=='D' || str[j]=='O' || str[j]=='P' || str[j]=='R' || str[j]=='Q')
            holes[i]++;
        if(str[j]=='B')
            holes[i]=holes[i]+2;
            j++;
    }
}
for(i=0;i<t;i++)
    printf("%d\n",holes[i]);
return 0;
}  
