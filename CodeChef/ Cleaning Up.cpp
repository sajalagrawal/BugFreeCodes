//https://www.codechef.com/problems/CLEANUP
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int t,n,m,j,i,k,p;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int a[n],b[m];
        for(i=0;i<n;i++){
            a[i]=i+1;
        }
 
        for(i=0;i<m;i++)
            cin>>b[i];
 
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i]==b[j]){
                    a[i]=0;
                }
            }
        }
        int chef[n-m],as[n-m];
        k=1;
        j=0;
        p=0;
        for(i=0;i<n-m;i++){
            chef[i]=0;
            as[i]=0;
        }
        for(i=0;i<n;i++){
            if(a[i]!=0){
                if(k%2==1){
                    chef[j]=a[i];
                    j++;
                    k++;
                }
                else{
                    as[p]=a[i];
                    p++;
                    k++;
                }
            }
        }
 
        for(i=0;i<j;i++){
            if(chef[i]!=0){
                cout<<chef[i]<<" ";
            }
            else
                cout<<" ";
        }
        cout<<"\n";
 
        for(i=0;i<p;i++){
            if(as[i]!=0){
               cout<<as[i]<<" ";
            }
            else
                cout<<" ";
        }
 
        cout<<"\n";
    }
    return 0;
}
