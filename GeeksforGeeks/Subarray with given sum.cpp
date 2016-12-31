//http://www.practice.geeksforgeeks.org/problem-page.php?pid=590
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
    int t,n,k,i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];
        int index1=0,curSum=0;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++){
            curSum+=a[i];
            while(curSum>k && index1<=i){
                curSum-=a[index1];
                index1++;
            }
            if(curSum==k)break;
            //cout<<"sum="<<curSum<<"index1="<<index1<<"i="<<i<<"\n";
        }
        if(curSum==k)cout<<(index1+1)<<" "<<(i+1)<<"\n";
        else cout<<"-1\n";
    }
	return 0;
}
