//https://www.codechef.com/AUG17/problems/GCAC
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll t,n,m,i,j;
    cin>>t;
    while(t--){
        cin>>n>>m;
        //cout<<"n="<<n<<"m="<<m<<endl;
        int mSal[n];
        for(i=0;i<n;i++){
            cin>>mSal[i];
            //cout<<mSal[i]<<" ";
        }
        //cout<<endl;
        int oSal[m],offer[m],empty[m]={0};
        for(i=0;i<m;i++){
            cin>>oSal[i]>>offer[i];
            //cout<<oSal[i]<<" "<<offer[i]<<endl;
        }
        int qual[n][m];
        string str;
        for(i=0;i<n;i++){
            cin>>str;
            for(j=0;j<m;j++){
                if(str[j]=='0')qual[i][j]=0;
                else qual[i][j]=1;
                //cout<<qual[i][j]<<" ";
            }
            //cout<<endl;
        }
        ll total=0,job=0;
        for(i=0;i<n;i++){
            ll maxx=-1,index=-1;
            for(j=0;j<m;j++){
                if(qual[i][j] and offer[j]>0 and oSal[j]>=mSal[i]){
                    if(oSal[j]>maxx){
                        index=j;
                        maxx=oSal[j];
                    }
                }
            }
            if(maxx>-1){
                empty[index]=1;
                total+=maxx;
                offer[index]--;
                job++;
            }
        }
        ll noJobcompany=0;
        for(i=0;i<m;i++){
            if(empty[i]==0)noJobcompany++;
        }
        cout<<job<<" "<<total<<" "<<noJobcompany<<"\n";
    }
	return 0;
}
