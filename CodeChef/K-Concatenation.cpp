//https://www.codechef.com/JAN18/problems/KCON
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,k,i;
        cin>>n>>k;
        ll ans=0;
        if(k==1){
            ll a[n];
            for(i=0;i<n;i++)cin>>a[i];
            ll max_so_far=LLONG_MIN,max_ending_here=0,start=0,end=0,s=0;
            for(i=0;i<n;i++){   //kadane's
                max_ending_here+=a[i];
                if(max_ending_here>max_so_far){
                    max_so_far = max_ending_here;
                    start = s;
                    end = i;
                }
                if(max_ending_here < 0){
                    max_ending_here = 0;
                    s = i + 1;
                }
            }
            //cout<<"sum="<<max_so_far<< endl;
            //cout<<"start="<<start<<endl;
            //cout<<"end="<<end<< endl;
            ans=max_so_far;
            cout<<ans<<"\n";
        }else if(k==2){
            ll a[2*n];
            for(i=0;i<n;i++)cin>>a[i];
            for(i=n;i<2*n;i++)a[i]=a[i-n];
            ll max_so_far=LLONG_MIN,max_ending_here=0,start=0,end=0,s=0;
            for(i=0;i<2*n;i++){   //kadane's
                max_ending_here+=a[i];
                if(max_ending_here>max_so_far){
                    max_so_far = max_ending_here;
                    start = s;
                    end = i;
                }
                if(max_ending_here < 0){
                    max_ending_here = 0;
                    s = i + 1;
                }
            }
            //cout<<"sum="<<max_so_far<< endl;
            //cout<<"start="<<start<<endl;
            //cout<<"end="<<end<< endl;
            ans=max_so_far;
            cout<<ans<<"\n";
        }else{
            ll a[3*n],total=0;
            for(i=0;i<n;i++){
                cin>>a[i];
                total+=a[i];
            }
            for(i=n;i<2*n;i++)a[i]=a[i-n];
            for(i=2*n;i<3*n;i++)a[i]=a[i-n];
            ll max_so_far=LLONG_MIN,max_ending_here=0,start=0,end=0,s=0;
            for(i=0;i<3*n;i++){   //kadane's
                max_ending_here+=a[i];
                if(max_ending_here>max_so_far){
                    max_so_far = max_ending_here;
                    start = s;
                    end = i;
                }
                if(max_ending_here < 0){
                    max_ending_here = 0;
                    s = i + 1;
                }
            }
            //cout<<"sum="<<max_so_far<< endl;
            //cout<<"start="<<start<<endl;
            //cout<<"end="<<end<< endl;
            if(end>=2*n){
                ll headsum=0,tailsum=0,remsum=0;
                //for(i=0;i<start;i++)headsum+=a[i];
                //for(i=end+1;i<3*n;i++)tailsum+=a[i];
                for(i=start;i<=end;i++)remsum+=a[i];
                remsum=remsum-total;
                ans=total*(k-2)+remsum;
                cout<<ans<<"\n";
            }else{
                ans=max_so_far;
                cout<<ans<<"\n";
            }
        }
        
    }
	return 0;
}


/*
3 3
8 -2 1 
a=22
3 3
4 2 -1
a=16
1 2
2
a=4
1 2
-2
a=-2
*/