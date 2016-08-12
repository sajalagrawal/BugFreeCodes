//https://www.codechef.com/problems/LCOLLIS
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;
int combination(int);
int factorial(int);
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,sum=0,total=0,i,j;
        cin>>n>>m;
        char a[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(j=0;j<m;j++){
            total=0;
            for(i=0;i<n;i++){
                if(a[i][j]=='1'){
                    total++;
                }
            }
            if(total>1){
                sum=sum+combination(total);
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}

int combination(int n){
    int c;
    c=factorial(n)/(factorial(2)*factorial(n-2));
    return c;
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    int f=1;
    while(n!=1){
        f=f*n;
        n--;
    }
    return f;
}
