//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-rotation-3/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
void rotate(int a[],int n,int k){
    int temp[n],i;
    for(i=0;i<n;i++){
        temp[(i+k)%n]=a[i];
    }
    for(i=0;i<n;i++)a[i]=temp[i];
}
 
int main()
{
    int t,n,k,i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        k=k%n;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        rotate(a,n,k);
        for(i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
