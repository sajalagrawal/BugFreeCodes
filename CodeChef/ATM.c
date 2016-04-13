//https://www.codechef.com/problems/HS08TEST
//Author - Sajal Agrawal
//@sajalagrawal

#include <stdio.h>
 
main()
{
    int x;
    float y;
    scanf("%d%f",&x,&y);
    if(x%5==0 && y>=x+0.5)
        y=y-x-0.5;
    printf("%.2f",y);
 
}
