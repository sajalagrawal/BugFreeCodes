//https://www.codechef.com/SNCKPA17/problems/ISSNAKE
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
char s[2][505];
char s2[2][505];
bool moveAround(int x,int y,int n,int hash){
    int count=1;
    while(1){
        
        if(x==0 and s[1][y]=='#'){
            //cout<<"a";
            s[0][y]='*';
            x=1;
            count++;
        }
        else if(x==1 and s[0][y]=='#'){//cout<<"b";
            s[1][y]='*';
            x=0;
            count++;
        }
        else if(y<n-1 and s[x][y+1]=='#'){//cout<<"c";
            s[x][y]='*';
            y++;
            count++;
        }
        else if(y>0 and s[x][y-1]=='#'){//cout<<"d";
            s[x][y]='*';
            y--;
            count++;
        }else break;
        
    }
    if(count==hash)return true;
    return false;
}
 
int main() {
    int t,n,i,j;
    scanf("%d",&t);
    while(t--){
        int hash=0,flag=0;
        scanf("%d",&n);
        
        for(i=0;i<=1;i++){
            for(j=0;j<n;j++){
                scanf(" %c",&s[i][j]);
                s2[i][j]=s[i][j];
                //cout<<s[i][j];
                if(s[i][j]=='#')hash++;
            }
            //cout<<endl;
        }
        for(i=0;i<n;i++){
            if(s[0][i]=='#' or s[1][i]=='#')break;
        }
        if(i==n)printf("no\n");
        else{
            //cout<<"i="<<i<<endl;
            if( s[0][i]=='#' and moveAround(0,i,n,hash) ){
                printf("yes\n");
                flag=1;
            }
            if(flag==0){
                for(int k=0;k<2;k++){
                    for(int l=0;l<n;l++){
                        s[k][l]=s2[k][l];
                    }
                }
            }
            if(flag==0 and s[1][i]=='#' and moveAround(1,i,n,hash)){
                printf("yes\n");
                flag=1;
            }
            if(flag==0) printf("no\n");
        }
        //hash=0;
    }
	return 0;
}


/*
1
3
###
#.#
ans=yes
*/