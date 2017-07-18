//https://www.codechef.com/JULY17/problems/NITIKA/
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    int t,i;
    scanf("%d",&t);
    getchar();
    while(t--){
        // str[100000000],ans[100000000];
        string str,ans="";
        //scanf("%[^\n]s",str);
        //cin.ignore();
        getline(cin,str);
        int n=str.size(),count=0;
        while(str[n-1]==' ')n--;
        for(i=0;i<n;i++){
            if(str[i]>='A' and str[i]<='Z')
                 str[i]+=32;
        }
        int flag=1,k=0;
        for(i=0;i<n;i++){
            if(flag){
                str[i]-=32;
                flag=0;
            }
            if(str[i]==' '){
                count++;
                flag=1;
            }
        }
        //cout<<"count="<<count<<endl;
        //cout<<"str="<<str<<endl;
        for(i=0;i<n;i++){
            if(count==0)break;
            if(str[i]>='A' and str[i]<='Z'){
                ans+=str[i++];
                ans+='.';
                ans+=' ';
                count--;
            }
            while((str[i]>='a' and str[i]<='z') or (str[i]>='A' and str[i]<='Z'))i++;
        }
        for(;i<n;i++){
            if((str[i]>='a' and str[i]<='z') or (str[i]>='A' and str[i]<='Z'))ans+=str[i];
        }
        cout<<ans<<endl;
    }
	return 0;
}