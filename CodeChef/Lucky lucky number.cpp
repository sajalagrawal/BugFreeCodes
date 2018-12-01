//https://www.codechef.com/problems/CHEFLUCK
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int flag=0;
        //if(n<7)printf("0\n");
        for(i=n/7;i>=0;i--){
            //cout<<"i="<<i<<endl;
            if((n-(i*7))%4==0){
                printf("%d\n",i*7);
                flag=1;
                break;
            }
        }
        if(flag==0)printf("-1\n");
    }
	return 0;
}
