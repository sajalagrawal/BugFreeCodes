//https://www.codechef.com/problems/CHEFSTLT
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;

int main()
{
    int t,i;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int max=0,min=0;
        for(i=0;i<s1.size();i++){
            if(s1[i]=='?' && s2[i]=='?'){
                max++;
            }else if((s1[i]=='?' && s2[i]!='?') ||(s1[i]!='?' && s2[i]=='?')){
                max++;
            }else if(s1[i]!=s2[i]){
                max++;
                min++;
            }
        }
        cout<<min<<" "<<max<<"\n";
    }
    return 0;
}
