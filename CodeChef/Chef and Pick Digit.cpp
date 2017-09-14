//https://www.codechef.com/SEPT17/problems/CHEFPDIG
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    string n;
    int t,i,j;
    cin>>t;
    while(t--){
        string str="";
        cin>>n;
        int ar[10]={0};
        for(i=0;i<n.size();i++){
            //cout<<n[i]<<" ";
            ar[n[i]-'0']++;
        }
        //for(i=0;i<=9;i++)cout<<ar[i];
        //cout<<endl;
        for(i=0;i<=9;i++){
            for(j=i;j<=9;j++){
                if(ar[i] and ar[j] and ((i!=j and ar[i]+ar[j]>=2) or (i==j and ar[i]>=2) )){
                    int a=i;
                    int b=j;
                    int n1=a*10+b;
                    int n2=b*10+a;
                    //cout<<"n1="<<n1<<" n2="<<n2<<endl;
                    if(n1>=65 and n1<=90){
                        char ch=(char)n1;
                        //cout<<"ch="<<ch<<endl;
                        if(str.find(ch,0)==-1)str+=ch;
                    }
                    if(n2>=65 and n2<=90){
                        char ch=(char)n2;
                        //cout<<"ch="<<ch<<endl;
                        if(str.find(ch,0)==-1)str+=ch;
                    }
                }
                
            }
        }
        sort(str.begin(),str.end());
        cout<<str<<"\n";
    }
    //sort(a,a+n);
	return 0;
}
