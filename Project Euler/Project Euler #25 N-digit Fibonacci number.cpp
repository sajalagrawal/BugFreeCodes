//https://www.hackerrank.com/contests/projecteuler/challenges/euler025/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

string stringAdd(string a,string b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    //a.size()>=b.size()
    string temp,res="";
    if(a.size()<b.size()){
        temp=a;
        a=b;
        b=temp;
    }
    //cout<<"a="<<a<<endl;
    int carry=0,sum,i;
    for(i=0;i<b.size();i++){
        sum=a[i]-'0'+b[i]-'0'+carry;
        if(sum>=10){
            carry=sum/10;
            sum=sum%10;
            //cout<<"carry="<<carry<<endl;
        }else{
            carry=0;
        }
        //cout<<sum<<endl;
        res+=sum+'0';
    }
    //cout<<"carry="<<carry<<endl;
    for(;i<a.size();i++){
        sum=a[i]-'0'+carry;
        if(sum>=10){
            sum=sum%10;
            carry=sum/10;
        }else{
            carry=0;
        }
        //cout<<sum<<endl;
        res+=sum+'0';
    }
    if(carry!=0){
        //cout<<"carry"<<endl;
        res+=carry+'0';
    }
    reverse(res.begin(),res.end());
    return res;
}

int main() {
    vector<string> data;  //number in reversed format
    data.pb("1");
    data.pb("1");
    string a="1",b="1",res;
    int curLen=1,i,indx=3;
    int ans[5005];
    ans[0]=0;
    while(1){
        if(curLen>=5000)break;
        res=stringAdd(a,b);
        a=b;
        b=res;
        data.pb(res);
        //cout<<res<<endl;
        if(res.size()>curLen){
            //cout<<"res.size()="<<res.size()<<endl;
            curLen=res.size();
            ans[curLen]=indx;
            //cout<<"ans="<<ans[curLen]<<endl;
        }
        indx++;
    }
    // for(i=0;i<=10;i++)cout<<"i="<<i<<" :"<<ans[i]<<endl;
    //cout<<ans[1000]; //4782
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<ans[n]<<"\n";
    }
	return 0;
}
