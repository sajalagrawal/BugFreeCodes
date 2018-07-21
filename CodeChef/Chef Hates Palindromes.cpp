//https://www.codechef.com/problems/CHEFHPAL
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
void solve(){
    int n,a,i;
    cin>>n>>a;
    if(a==1){
        cout<<n<<" ";
        for(i=0;i<n;i++)cout<<"a";
        cout<<"\n";
        return;
    }
    if(a==2){
        if(n==1){
            cout<<"1 a\n";
            return;
        }
        if(n==2){
            cout<<"1 ab\n";
            return;
        }
        if(n==3){
            cout<<"2 aab\n";
            return;
        }
        if(n==4){
            cout<<"2 aabb\n";
            return;
        }
        if(n==5){
            cout<<"3 aabab\n";
            return;
        }
        if(n==6){
            cout<<"3 aababb\n";
            return;
        }
        if(n==7){
            cout<<"3 aababbb\n";
            return;
        }
        if(n==8){
            cout<<"3 aaababbb\n";
            return;
        }
        //aababb aababb aababb
        cout<<"4 ";
        while(n>=6){
            cout<<"aababb";
            n=n-6;
        }
        string str="aababb";
        i=0;
        while(n--){
            cout<<str[i++];
        }
        cout<<"\n";
        return;
    }
    cout<<"1 ";
    int k=0;
    for(i=0;i<n;i++){
        cout<<(char)('a'+k%a);
        k=k%a;
        k++;
    }
    cout<<"\n";
    return;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
