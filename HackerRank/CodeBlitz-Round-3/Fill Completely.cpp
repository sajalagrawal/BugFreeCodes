//https://www.hackerrank.com/contests/codeblitz3/challenges/fill-completely
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
	    double n,m,a;
	    scanf("%lf %lf %lf",&n,&m,&a);
	    //cout<<ceil(n/a)<<endl;
	    //cout<<ceil(m/a)<<endl;
	    ll ans=ceil(n/a)*ceil(m/a);
	    printf("%lld\n",ans);
	}
	return 0;
}
//Without using ceil()
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

int main() {
    ll t,n,m,a;
    cin>>t;
    while(t--){
        cin>>n>>m>>a;
        ll row,col;
        row=n/a;
        if(n%a)row++;
        col=m/a;
        if(m%a)col++;
        cout<<row*col<<"\n";
    }
	return 0;
}