//https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/monk-and-modulo-based-sorting/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bSort(int a[],int n,int k){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if((a[j]%k)>(a[j+1]%k)){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
 
int main()
{
    int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)cin>>a[i];
    bSort(a,n,k);
    for(i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
