//https://www.codechef.com/JAN18/problems/PRTITION
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
//memset(str,'*',sizeof(char)*10);
int main() {
    ll t,x,n,i;
    scanf("%lld",&t);
    //cout<<t<<endl;
    while(t--){
        ll cur;
        scanf("%lld %lld",&x,&n);
        char str[n+1];
        memset(str,'*',sizeof(char)*(n+1));
        //cout<<"start="<<str<<endl;
        ll sum=(n*(n+1))/2;
        if(n<=3 or sum%2 != x%2){
            printf("impossible\n");
            goto answer;
        }else{
            ll flag=0;
            ll rep=0;
            repeat:;
            sum=(n*(n+1))/2;
            str[x]='2';
            //cout<<str<<endl;
            sum-=x;
            sum/=2;
            if(x==n)cur=n-1;
            else cur=n;
            //if(flag==1)cur-=rep;
            //flag=0;
            while(sum){
                //cout<<"n="<<n<<" cur="<<cur<<" sum="<<sum<<endl;
                if(cur>sum){
                    cur=sum;
                }
                if(cur==x){
                    flag=1;
                    rep++;
                    memset(str,'*',sizeof(char)*(n+1));
                    goto repeat;
                }
                str[cur]='1';
                sum=sum-cur;
                if(flag==1){
                    cur=cur-rep;
                    flag=0;
                }else{
                    cur--;    
                }
            }
            //cout<<"here="<<str<<endl;
            for(i=1;i<=n;i++){
                if(str[i]=='*')str[i]='0';
                printf("%c",str[i]);
            }
            printf("\n");
            goto answer;
        }
        
        answer:;
    }
	return 0;
}
 
 
/*
x=2 n=8
*/