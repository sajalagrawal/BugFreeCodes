//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-welcome-problem/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main()
{
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)cin>>b[i];
    for(i=0;i<n;i++)a[i]=a[i]+b[i];
    for(i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
