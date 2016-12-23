//https://www.hackerearth.com/problem/algorithm/monk-and-suffix-sort/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[25];
    cin>>str;
    int i,j,k;
    cin>>k;
    char ar[strlen(str)][25];
    for(i=0;i<strlen(str);i++){
        strcpy(ar[i],str+i);//dest,source
    }
    //bubble sort
    for(i=0;i<strlen(str)-1;i++){
        for(j=0;j<strlen(str)-i-1;j++){
            if(strcmp(ar[j],ar[j+1])>0){
                char temp[25];
                strcpy(temp,ar[j]);
                strcpy(ar[j],ar[j+1]);
                strcpy(ar[j+1],temp);
            }
        }
    }
    cout<<ar[k-1]<<"\n";
    return 0;
}
