//https://www.hackerrank.com/contests/projecteuler/challenges/euler012
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
int sum[42001];
int divnum[42001];
void storeSum(){
    int i=1;
    sum[0]=0;
    sum[1]=1;
    for(;i<=42000;i++){
        sum[i]=sum[i-1]+i;
    }
    return;
}
void storeDiv(){
    int i,j;
    divnum[0]=0;
    divnum[1]=1;
    int num,mult,p=0;
    for(i=2;i<=42000;i++){
        p=0;
        num=sum[i];
        mult=1;
        while(num%2==0){
            p++;
            num=num/2;
        }
        mult=(p+1);
        p=0;
        for(j=3;j<=num;j=j+2){
            p=0;
            while(num%j==0){
                p++;
                num=num/j;
            }
            mult=mult*(p+1);
        }
        divnum[i]=mult;
    }
}
int main() {
    storeSum();
    storeDiv();
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        //cout<<sum[upper_bound(divnum,divnum+42001,n)-divnum]<<"\n";
        for(i=1;i<42001;i++){
            if(divnum[i]>n){
                cout<<sum[i]<<endl;
                break;
            }
        }
    }
	return 0;
}
