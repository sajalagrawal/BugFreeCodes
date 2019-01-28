//https://www.geeksforgeeks.org/fractional-knapsack-problem/
//https://practice.geeksforgeeks.org/problems/fractional-knapsack/0

#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return ((float)a.first/a.second) > ((float)b.first/b.second) ;
}
int main(){
    int t,n,w,i;
    cin>>t;
    while(t--){
        cin>>n>>w;
        int v,we;
        vector< pair<int,int> >vp;  //value,weight
        for(i=0;i<n;i++){
            cin>>v>>we;
            vp.push_back(make_pair(v,we));
        }
        sort(vp.begin(),vp.end(),cmp);
        float ans=0;
        for(i=0;i<vp.size();i++){
            if(vp[i].second<=w){
                ans+=vp[i].first;
                w-=vp[i].second;
            }else{
                float k=(float)w/vp[i].second;
                ans+=k*vp[i].first;
                break;
            }
        }
        cout<<fixed<<setprecision(2)<<ans<<"\n";
    }
	return 0;
}
