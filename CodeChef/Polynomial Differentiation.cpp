//https://www.codechef.com/problems/POLYDIFR
//https://www.codechef.com/LOCFEB16
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
    return (a.second > b.second);
}
 
vector< pair<ll,ll> > pp;
int main() {
    ll t,n,i,coeff,a,p;
    cin>>t;
    while(t--){
        pp.erase(pp.begin(),pp.end());
        cin>>n;
        while(n--){
            cin>>a>>p;
            if(a>0)pp.push_back(make_pair(a,p));
        }
        sort(pp.begin(),pp.end(),sortbysec);  //sort descending according to second value
        if(pp.size()==1 and (pp[0].second==0 or pp[0].first==0)){
            cout<<"0\n";
            continue;
        }
        if(pp.size()==0){
            cout<<"0\n";
            continue;
        }
        for(i=0;i<pp.size();i++){
            //cout<<"a="<<pp[i].first<<" p="<<pp[i].second<<endl;
            if(pp[i].second!=0){
                if(i>0)cout<<"+ ";
                coeff=pp[i].first*pp[i].second;
                if(coeff!=0)cout<<coeff;
                if(pp[i].second>1)cout<<"x^"<<(pp[i].second-1)<<" ";
            }
        }
        cout<<"\n";
    }
	return 0;
}
