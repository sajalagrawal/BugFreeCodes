//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/a-simple-task/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<limits.h>
using namespace std;
#define gc getchar_unlocked

int read_int(){
    char c=gc();
    while(c<'0'|| c>'9')c=gc();
    int ret=0;
    while(c>='0' && c<='9'){
        ret=ret*10+c-48;
        c=gc();
    }
    return ret;
}
int main()
{
    int n;
    n=read_int();
    int a[n],min=INT_MAX;
    for(int i=0;i<n;i++){
        a[i]=read_int();
    }
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i-1])<min)min=abs(a[i]-a[i-1]);
    }
    int k=2,mod,flag=0;
    while(k<=min){
        mod=a[0]%k;
        flag=0;
        for(int i=1;i<n;i++){
            if(a[i]%k!=mod){
                flag=1;
                break;
            }
        }
        if(flag==0)cout<<k<<" ";
        k++;
    }
    
    return 0;
}
