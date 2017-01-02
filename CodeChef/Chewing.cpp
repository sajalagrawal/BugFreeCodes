//https://www.codechef.com/ZCOPRAC/problems/ZCO13003
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    long long int n,k,res=0,i,p=0,num;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>num;
        if(num<k){
            a[p]=num;
            p++;
        }
    }
    sort(a,a+p);
    int right=p-1;
    for(int left=0;left<right;){
        if(a[left]+a[right]<k){
            res+=(right-left);
            left++;
        }else{
            right--;
        }
    }
    cout<<res;
    return 0;
} 
