//https://www.codechef.com/problems/VILTRIBE
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,i,a=0,b=0,dot;
    char prev;
    cin>>t;
    while(t--){
        a=b=0;
        string str;
        cin>>str;
        i=0;
        while(str[i]=='.'){
            str.erase(i,1);
        }
        if(str.length()==0)cout<<"0 0\n";
        else{
            reverse(str.begin(),str.end());
            i=0;
            while(str[i]=='.'){
                str.erase(i,1);
            }
            //cout<<"str="<<str<<endl;
            //cout<<"i="<<i<<endl;
            //cout<<"str.length()="<<str.length()<<endl;
            //cout<<"str.size()="<<str.size()<<endl;
            if(str.length()==0)cout<<"0 0\n";
            else{
                dot=0;
                prev=str[i++];
                if(prev=='A')a++;
                if(prev=='B')b++;
                for(;i<str.length();i++){
                    //cout<<"i="<<i<<"a="<<a<<" b="<<b<<endl;
                    if(str[i]=='A'){
                        if(prev=='A'){
                            //cout<<"hello";
                            a+=dot;
                        }
                        prev='A';
                        a++;
                        dot=0;
                    }
                    if(str[i]=='B'){
                        if(prev=='B')b+=dot;
                        prev='B';
                        b++;
                        dot=0;
                    }
                    if(str[i]=='.'){
                        dot++;
                    }
                }
                //cout<<"i="<<i<<"a="<<a<<" b="<<b<<endl;
                cout<<a<<" "<<b<<endl;
            }
        }
        
    }
	return 0;
}
