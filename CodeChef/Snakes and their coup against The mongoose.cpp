//https://www.codechef.com/problems/SNCOUP
//https://www.codechef.com/SNCKPB17/problems/SNCOUP
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        char a[2][n];
        for(i=0;i<2;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int upper=0,lower=0,ans=0,horizont=0,count=0,one=0,zero=0;
        for(i=0;i<n;i++){
            if(a[0][i]=='*'){
                upper=1;
                break;
            }
        }
        for(i=0;i<n;i++){
            if(a[1][i]=='*'){
                lower=1;
                break;
            }
        }
        //cout<<"upper="<<upper<<endl;
        //cout<<"lower="<<lower<<endl;
        if(upper==1 and lower==1){
            ans++;
            horizont=1;//put a horizontal line
        }
        //cout<<"horizont="<<horizont<<endl;
        if(horizont==0){
            if(upper==1){
                for(i=0;i<n;i++){
                    if(a[0][i]=='*')count++;
                }
                ans+=count-1;
            }
            if(lower==1){
                for(i=0;i<n;i++){
                    if(a[1][i]=='*')count++;
                }
                ans+=count-1;
            }
        }else{
            if(a[0][0]=='*')zero=1;  //last occured snake in row=0
            if(a[1][0]=='*')one=1;   //last occured snake in row=1
            for(i=1;i<n;i++){
                
                if( (a[0][i]=='*' and zero==1) or (a[1][i]=='*' and one==1) ){
                    //cout<<"i="<<i<<endl;
                    ans++;    
                    if(a[0][i]=='*'){
                        zero=1;
                    }
                    if(a[0][i]=='.'){
                        zero=0;
                    }
                    if(a[1][i]=='*'){
                        one=1;
                    }
                    if(a[1][i]=='.'){
                        one=0;
                    }
                }else{
                    //cout<<"j="<<i<<endl;
                    if(a[0][i]=='*'){
                        zero=1;
                    }
                    if(a[1][i]=='*'){
                        one=1;
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }
	return 0;
}
 
 
/*
1
5
*....
...**
ans=2
*/ 
*/ 