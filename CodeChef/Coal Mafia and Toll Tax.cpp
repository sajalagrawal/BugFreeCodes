//https://www.codechef.com/problems/KGP16H
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>

using namespace std;

int main()
{
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int tax[n-1];
        int p[n-1];
        int max_so_far=0,max_end_here=0;
        int sum=0;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n-1;i++)cin>>tax[i];
        for(i=0;i<n-1;i++)cin>>p[i];

        for(i=1;i<n;i++){
            a[i]=a[i]-tax[i-1]*p[i-1];
            //if(a[i]<0)a[i]=0;
        }
        int index=n-1;
        //for(i=0;i<n;i++)cout<<a[i]<<" ";
        for(i=n-1;i>0;i--){
            sum+=a[i];
            if(sum<0){
                index=i-1;
                sum=0;
            }
        }
        sum=0;
        for(i=0;i<=index;i++)sum+=a[i];

        /*for(i=0;i<n;i++){
	            max_end_here+=a[i];
	            if(max_end_here<0)max_end_here=0;
	            if(max_end_here>max_so_far)max_so_far=max_end_here;
        }
        cout<<max_so_far<<"\n";*/
        //for(i=0;i<n;i++)sum+=a[i];
        cout<<sum<<"\n";
    }

    return 0;
}

