//https://www.hackerrank.com/contests/projecteuler/challenges/euler039/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
int freq[5000005];  //making this as global variable isn't giving segmentation fault
//global variables are stored in data segment
int main() {
    //primitive: 3,4,5
    //non primitive: 9,12,15
    //Euclids method a=m^2-n^2, ,b=2mn, ,c=m^2+n^2 0<n<m
    //https://en.wikipedia.org/wiki/Pythagorean_triple#Generating_a_triple
    
    int m,n,i,perimeter=0;
    memset(freq,0,sizeof freq);
    for(m=2;m<=1200;m++){
        for(n=1;n<m;n++){
            if((m%2==0 or n%2==0) and __gcd(m,n)==1){
                perimeter=2*m*m+2*m*n;
                for(i=1;;i++){
                    if(i*perimeter>5000000)break;
                    freq[i*perimeter]++;
                }
            }
        }
    }
    /*for(i=0;i<=100;i++){
        if(freq[i]){
            cout<<"i="<<i<<" freq="<<freq[i]<<endl;
        }
    }*/
    int ans[5000005],maxFreq=0,indx=0;
    for(i=1;i<5000005;i++){
        if(freq[i]>maxFreq){
            maxFreq=freq[i];
            indx=i;
        }
        ans[i]=indx;
    }
    int t,N;
    cin>>t;
    while(t--){
        cin>>N;
        cout<<ans[N]<<"\n";
    }
	return 0;
}
