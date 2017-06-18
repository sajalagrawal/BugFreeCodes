//https://www.codechef.com/COOK83/problems/ADACRA
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int up=0,down=0,flag=0;
        if(str[0]=='U'){
            up++;
            flag=1;
        }
        else {
            down++;
            flag=0;
        }
        for(int i=1;i<str.size();i++){
            if(flag==1 and str[i]=='D'){
                down++;
                flag=0;
            }
            if(flag==0 and str[i]=='U'){
                up++;
                flag=1;
            }
        }
        //cout<<up<<" "<<down<<endl;
        cout<<min(up,down)<<"\n";
    }
	return 0;
}
 