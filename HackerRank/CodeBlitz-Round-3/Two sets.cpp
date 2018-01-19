//https://www.hackerrank.com/contests/codeblitz3/challenges/two-sets
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
int solve(int setA, int foo,vector<int> &nodes,int setB){		//foo=total given by setB to setA
    //cout<<"setA="<<setA<<"foo="<<foo<<"setB="<<setB<<endl;
    if(setA+foo==setB){
        //cout<<"setA="<<setA<<" foo="<<foo<<endl;
        return 1;
    }
    if(nodes.empty()){
        return 0;
    }
    int first=nodes[0];
    vector<int> copy=nodes;
    //cout<<"first="<<first<<endl;
    copy.erase(copy.begin());
    return (solve(setA,foo,copy,setB) || solve(setA,foo+first,copy,setB-first));
}
int main() {
	//freopen("ip.txt","r",stdin);
	//freopen("op.txt","w",stdout);
    int t,setA,k,i,j,n;
    //scanf("%d",&t);
    t = 1;
    while(t--){
        scanf("%d%d",&n,&setA);     //setA=sum of elements of setA
        assert(n>=1 and setA>=0);
        int setB=0;
        vector<int> nodes;
        for(i=0;i<n;i++){
            scanf("%d",&k);
            assert(k>=0);
            nodes.push_back(k); 	//nodes=elements in setB
            setB+=k;		     	//setB=sum of elements of setB
        }
        if((setA+setB)%2==1)cout<<"0";
        else if(setA>setB)cout<<"0";
        else cout<<solve(setA,0,nodes,setB)?"1":"0";
        cout<<"\n";
        //cout<<"size="<<nodes.size()<<endl;
    }
	return 0;
}