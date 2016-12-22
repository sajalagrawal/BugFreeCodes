//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/monk-and-inversions-arrays-strings/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int p,q,res=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(p=0;p<=i;p++){
                    for(q=0;q<=j;q++){
                        if(a[i][j]<a[p][q])res++;
                    }
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
