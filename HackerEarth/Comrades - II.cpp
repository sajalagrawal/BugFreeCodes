//https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/practice-problems/algorithm/comrades-ii-6/
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v[100005];
vector<ll> visited(100005);
vector<ll> height(100005);
void dfs(ll root){
    queue<ll> q;
    q.push(root);
    visited[root]=1;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        for(ll i=0;i<v[p].size();i++){
            if(visited[v[p][i]]==0){
                q.push(v[p][i]);
                visited[v[p][i]]=1;
                height[v[p][i]]=height[p]+1;
                
            }
        }
    }
}

int main()
{
    ll t,i,k,p,root,n;
    cin>>t;
    while(t--){
        for(i=0;i<=100005;i++)v[i].clear();
        cin>>n;
        for(i=1;i<=n;i++){
            cin>>p;
            if(p==0)root=i;
            else v[p].push_back(i);
        }
        for(i=0;i<100005;i++){
            height[i]=0;
            visited[i]=0;
        }
        dfs(root);
        ll ans=0;
        //for(i=1;i<=n;i++)cout<<height[i]<<" ";
        //cout<<endl;
        for(i=1;i<=n;i++){
            ans+=height[i];
        }
        ll total=(n*(n-1))/2;
        cout<<ans<<" "<<(total-ans)<<"\n";
    }
    return 0;
}
