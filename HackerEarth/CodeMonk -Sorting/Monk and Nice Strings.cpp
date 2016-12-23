//https://www.hackerearth.com/practice/algorithms/sorting/insertion-sort/practice-problems/algorithm/monk-and-nice-strings-3/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    char str[n][11];
    for(i=0;i<n;i++)cin>>str[i];
    int res=0;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(strcmp(str[i],str[j])>0)res++;
        }
        cout<<res<<"\n";
        res=0;
    }
    return 0;
}
