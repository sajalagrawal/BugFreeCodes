//https://www.codechef.com/LTIME50/problems/LOSTMAX/
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    ll t,n,k;
    cin>>t;
    //cout<<"t="<<t<<endl;
    //getchar();
    while(t--){
        //char line[500000000];
        //string line;
        ll a[55],count=0,i;
        char temp;
        /*scanf("%[^\n]",line);
        //getline(cin,line);
        getchar();
        //cout<<line<<endl;
        stringstream stream(line);
        while (stream >> k) {
            a[count++]=k;
        }*/
        do{
            //cout<<"do";
            
            scanf("%lld%c",&a[count++],&temp); 
            //cout<<a[count-1]<<" ";
        
        } while(temp!='\n');
 
        n=count-1;
        //cout<<"n="<<n<<endl;
        int flag=0;
        ll maxx=LLONG_MIN;
        for(i=0;i<count;i++){
            if(flag==0 and a[i]==n){
                flag=1;
                //cout<<"i="<<i<<endl;
                continue;
            }
            if(flag==1 and a[i]>maxx)maxx=a[i];
            if(flag==0 and a[i]!=n and a[i]>maxx){
                maxx=a[i];
            }
        }
        cout<<maxx<<"\n";
    }
	return 0;
}
 