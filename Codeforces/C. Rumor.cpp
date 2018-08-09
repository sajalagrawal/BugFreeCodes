//http://codeforces.com/contest/893/problem/C
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

/*
if friends are:
1 2
5 2
out of 1, 2 and 5 find out the minimum cost and add this to result as we can bribe any one of them to spread among three of them.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
vector<ll> v[100005];
vector<ll> visited(100005);
vector<ll> coins(100005);
ll ans=0;
ll mincost=INT_MAX;
ll bfs(ll root){
    queue<ll> q;
    //ans+=coins[root];
    mincost=min(mincost,coins[root]);
    q.push(root);
    visited[root]=1;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        for(ll i=0;i<v[p].size();i++){
            if(visited[v[p][i]]==0){
                q.push(v[p][i]);
                visited[v[p][i]]=1;
                mincost=min(mincost,coins[v[p][i]]);
            }
        }
    }
    return mincost;
}
int main() {
    int n,m,i,x,y;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)scanf("%d",&coins[i]);
    for(i=0;i<m;i++){
        scanf("%d%d",&x,&y);
        x--;
        y--;
        v[x].push_back(y);  //x is friend of y
        v[y].push_back(x);  //therefore y is also friend of x
    }
    for(i=0;i<n;i++){
        if(!visited[i]){
            ans+=bfs(i);
            mincost=INT_MAX;
        }
    }
    for(i=0;i<n;i++){
        if(!visited[i])ans+=coins[i];
    }
    printf("%lld",ans);
	return 0;
}