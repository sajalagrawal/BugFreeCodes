//https://www.codechef.com/problems/STRPALIN
//https://www.codechef.com/MARCH16?order=desc&sortBy=successful_submissions
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,i;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int x[26]={0},y[26]={0};
        for(i=0;i<a.size();i++){
            x[a[i]-'a']++;
        }
        for(i=0;i<b.size();i++){
            y[b[i]-'a']++;
        }
        for(i=0;i<26;i++){
            if(x[i]!=0 and y[i]!=0){
                //cout<<x[i]<<" "<<y[i]<<endl;
                cout<<"Yes\n";
                goto flag;
            }
        }
        cout<<"No\n";
        flag:;
    }
	return 0;
}
