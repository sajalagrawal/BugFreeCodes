//https://www.hackerrank.com/contests/projecteuler/challenges/euler017
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
string a[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
string b[]={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

string ans="";

void solve(string num){
    int n=stoi(num);
    if(n/100){
        ans+=a[n/100]+" Hundred ";
        n=n%100;
        if(n)ans+="and ";
    }
    if(n/10){
        if(n/10==1){
            ans+=a[n]+" ";
            n=0;
        }else{
            ans+=b[n/10]+" ";
            n=n%10;
        }   
    }
    if(n){
        ans+=a[n]+" ";
    }
}
int main() {
    ll res=0,i;
    //cin>>t;
    for(i=1;i<=1000;i++){
        string num=to_string(i);
        ans="";
        cin>>num;
        if(num=="0"){
            cout<<"Zero";
            continue;
        }
        int len=num.size(),i=0,sol;
        while(len){
            sol=len%3;
            if(sol==0)sol=3;
            solve(num.substr(i,sol));
            if(len>9)ans+="Billion ";
            else if(len>6 and stoi(num.substr(i,sol))!=0)ans+="Million ";
            else if(len>3 and stoi(num.substr(i,sol))!=0)ans+="Thousand ";
            i+=sol;
            len-=sol;
        }
        //cout<<ans<<"\n";
        ans.erase(remove(ans.begin(),ans.end(),' '),ans.end());
        res+=ans.size();
    }
    cout<<res;
	return 0;
}
