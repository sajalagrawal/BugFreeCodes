//http://codeforces.com/problemset/problem/472/C
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n;
    scanf("%d",&n);
    string fname[n],lname[n];
    for(int i=0;i<n;i++){
        cin>>fname[i]>>lname[i];
        if(fname[i]>lname[i])swap(fname[i],lname[i]);
    }
    string prev="";
    int flag=0;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        p--;
        if(fname[p]>prev)prev=fname[p];
        else if(lname[p]>prev)prev=lname[p];
        else{
            cout<<"NO";
            flag=1;
            break;
        }
    }
    if(!flag)cout<<"YES";
	return 0;
}
