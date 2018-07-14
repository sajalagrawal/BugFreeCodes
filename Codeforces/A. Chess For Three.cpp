//http://codeforces.com/contest/893/problem/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,a=1,b=2,i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        //cout<<"a="<<a<<" b="<<b<<endl;
        scanf("%d",&k);
        if(i==0 and k==3){
            printf("NO\n");
            return 0;
        }
        if(k==a or k==b){
            if(k==1){
                if(a==1){
                    if(b==2)b=3;
                    else b=2;
                }
                if(b==1){
                    if(a==2)a=3;
                    else a=2;
                }
            }
            if(k==2){
                if(a==2){
                    if(b==1)b=3;
                    else b=1;       
                }
                if(b==2){
                    if(a==1)a=3;
                    else a=1;
                }
            }
            if(k==3){
                if(a==3){
                    if(b==1)b=2;
                    else b=1;    
                }
                if(b==3){
                    if(a==2)a=1;
                    else a=2;
                }
            }
        }else{
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
	return 0;
}


//2nd method
//http://codeforces.com/contest/893/problem/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int a=1,b=2,c=3,n,k;
    cin>>n;
    while(n--){
        cin>>k;
        if(k==c){
            printf("NO\n");
            return 0;
        }else{
            a=k;
            b=c;
            c=6-a-b;
        }
    }
    printf("YES\n");
	return 0;
}
