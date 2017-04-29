//https://www.codechef.com/LTIME47/problems/SEGM01/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main() {
    int t,i;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int seg=0;
        for(i=0;i<str.size();i++){
            if(str[i]=='1' and seg==0)seg=1;
            else if(str[i]=='0' and seg==1){
                seg=2;
            }
            else if(str[i]=='1' and seg==2){
                seg=0;
                break;
            }
        }
        if(seg==1 or seg==2)cout<<"YES\n";
        else cout<<"NO\n";//seg=0,
    }
	return 0;
}
