//https://www.codechef.com/problems/PBUZZ3
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,i;
    cin>>n;
    ll a[n][2];
    for(i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
    }
    
    float avgX=0,avgY=0;
    for(i=0;i<n;i++){
        avgX+=(float)a[i][0]/n;
        avgY+=(float)a[i][1]/n;
    }
    //cout<<"avgX="<<avgX<<endl;
    //cout<<"avgY="<<avgY<<endl;
    int point=0;
    float minn=sqrt((a[0][0]-avgX)*(a[0][0]-avgX) + (a[0][1]-avgY)*(a[0][1]-avgY));
    for(i=1;i<n;i++){
        float k=sqrt((a[i][0]-avgX)*(a[i][0]-avgX) + (a[i][1]-avgY)*(a[i][1]-avgY));
        if(k<minn){
            minn=k;
            point=i;
        }
    }
    //cout<<"point="<<point<<"\n";
    ll ans=0;
    for(i=0;i<n;i++){
        ans+=max(abs(a[i][0]-a[point][0]),abs(a[i][1]-a[point][1]));
    }
    cout<<ans<<"\n";
	return 0;
}
