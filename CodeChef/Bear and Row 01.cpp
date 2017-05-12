//https://www.codechef.com/problems/ROWSOLD/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        long long answer=0;
        long long jumps=0;
        long long placement=str.size()-1;
        for(i=str.size()-1;i>=0;i--){
            if(str[i]=='1'){
                if(i!=str.size()-1 and str[i+1]=='0')
                     jumps++;
                answer+=jumps+placement-i;
                placement--;
            }
        }
        cout<<answer<<endl;
    }
	return 0;
}
