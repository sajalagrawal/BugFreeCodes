//https://www.youtube.com/watch?v=NnD96abizww
//Longest Common Subsequence
//https://www.codechef.com/JAN18/problems/STRMRG
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

int main() {
    ll t,i,j;
    scanf("%lld",&t);
    while(t--){
        ll m,n;
        scanf("%lld %lld",&m,&n);
        //cout<<"m="<<m<<" n="<<n<<endl;
        string s1,s2;
        cin>>s1>>s2;
        int flag=0;
        //cout<<s1<<" "<<s2<<endl;
        for(i=0;i<m;){
            flag=0;
            while(i<m-1 and s1[i]==s1[i+1]){
                s1.erase(i+1,1);
                m--;
                flag=1;
            }
            if(flag==0)i++;
        }
        for(i=0;i<n;){
            flag=0;
            while(i<n-1 and s2[i]==s2[i+1]){
                s2.erase(i+1,1);
                n--;
                flag=1;
            }
            if(flag==0)i++;
        }
        //cout<<"m="<<m<<" n="<<n<<endl;
        //cout<<s1<<" "<<s2<<endl;
        int dp[m+1][n+1];
        for(i=0;i<=m;i++)dp[i][0]=0;
        for(i=0;i<=n;i++)dp[0][i]=0;
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        /*for(i=0;i<=m;i++){
            for(j=0;j<=n;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }*/
        cout<<(m+n-dp[m][n])<<"\n";
    }
	return 0;
}
