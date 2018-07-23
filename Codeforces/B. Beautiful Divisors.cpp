//http://codeforces.com/contest/893/problem/B
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    //itoa(a,res,2)
    int n,i,j=0,k=0,m;
    scanf("%d",&n);
    for(m=1;m<=n/2;m++){
        //cout<<"m="<<m<<endl;
        if(n%m==0){
            i=n/m;
            j=0;k=0;
            //cout<<"i="<<i<<endl;
            while(i%2==0){
                i=i/2;
                j++;
            }
            while(i%2==1){
                i=i/2;
                k++;
            }
            if(i!=0)continue;
            //cout<<"j="<<j<<" k="<<k<<endl;
            //cout<<"n="<<n<<" m="<<m<<endl;
            if(j==k-1){
                printf("%d",n/m);
                return 0;
            }
        }
    }
    printf("1\n");
	return 0;
}


//2nd method
//http://codeforces.com/contest/893/problem/B
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
int a[]={32640,8128,2016,496,120,28,6,1};
int main() {
    //itoa(a,res,2)
    int n,i,j=0,k=0,m;
    scanf("%d",&n);
    for(i=0;i<8;i++){
        if(n%a[i]==0){
            printf("%d\n",a[i]);
            break;
        }
    }
	return 0;
}
