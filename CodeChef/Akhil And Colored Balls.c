//https://www.codechef.com/problems/ACBALL
//Author - Sajal Agrawal
//@sajalagrawal

  #include <stdio.h>
    #include <stdlib.h>
 
    int main()
    {
         int t,i,k;
        char x[100001],y[100001],z[100001];
        scanf("%d",&t);
        while(t--){
            scanf("%s%s",x,y);
            i=0;
            k=0;
            while(x[i]!='\0'){
                if(x[i]==y[i]){
                    if(x[i]=='W') z[k++]='B';
                    else z[k++]='W';
                }else{
                    z[k++]='B';
                }
                i++;
            }
            z[k]='\0';
            printf("%s\n",z);
        }
        return 0;
    }
 
 
