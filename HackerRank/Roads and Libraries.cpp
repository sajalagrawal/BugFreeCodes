//https://www.hackerrank.com/challenges/torque-and-development/problem?h_l=interview&playlist_slugs%5B%5D=codenation
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> adj[100005];
bool vis[100005];
ll nodes=0;
void dfs(ll src){
    vis[src]=true;
    nodes++;
    ll i;
    for(i=0;i<adj[src].size();i++){
        if(!vis[adj[src][i]]){
            dfs(adj[src][i]);
        }
    }
}
int main(){
    ll q;
    scanf("%lld",&q);
    while(q--){
        ll n,m,lib,road,i,a,b;
        scanf("%lld %lld %lld %lld",&n,&m,&lib,&road);
        for(i=0;i<m;i++){
            scanf("%lld %lld",&a,&b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        ll ans=0;
        for(i=1;i<=n;i++){
            if(!vis[i]){
                nodes=0;
                dfs(i);
                ll a1=(nodes-1)*road+lib;
                ll a2=nodes*lib;
                ans+=min(a1,a2);
            }
        }
        printf("%lld\n",ans);
        for(i=1;i<=n;i++){
            adj[i].clear();
            vis[i]=false;
        }
    }
    return 0;
}