//https://www.codechef.com/problems/CHN09
//Author - Sajal Agrawal
//@sajalagrawal

#include <stdio.h>
int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    char ch[100];
    while(t--){
        scanf("%s",ch);
        i=0;
        a=0;
        b=0;
        while(ch[i]!='\0'){
            if(ch[i]=='a')
                a++;
            else
                b++;
 
            i++;
        }
        if(a<=b)
            printf("%d\n",a);
        else
            printf("%d\n",b);
 
    }
    return 0;
}
