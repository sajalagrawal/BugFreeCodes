//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/little-monk-and-mountains/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<vector>
using namespace std;
#define ll long long int
int main()
{
    ll x,y,s,k,a,n,q;
    cin>>n>>q;
    vector<pair<ll,ll>>vec;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
        if(i==0){
            arr[i]=y-x+1;
        }else{
            arr[i]=arr[i-1]+(y-x+1);
        }
    }
    while(q--){
        cin>>s;
        a=lower_bound(arr,arr+n,s)-arr;
        if(a==0){
            k=s;
        }else{
            k=s-arr[a-1];
        }
        cout<<vec[a].first+k-1<<"\n";
    }
    return 0;
}
