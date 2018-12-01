//https://www.codechef.com/DEC17/problems/CHEFHAM
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int t,i,n,k;
    scanf("%d",&t);
    //cout<<"t="<<t<<endl;
    while(t--){
        scanf("%d",&n);
        int copy[n];
        int count[100005]={0};
        pair<int,int> a[n];
        pair<int,int> dup[n]; //duplicates if any
        int hasha[n],hashdup[n],flag=0,dupvalue,seconddupindex;
        memset(hasha,0,sizeof hasha);
        memset(hashdup,0,sizeof hashdup);
        int indexa=0,indexdup=0,noofdup=0;
        for(i=0;i<n;i++){
            //scanf("%d",&a[i].first);
            scanf("%d",&k);
            if(count[k]==0){
                a[indexa].first=k;
                a[indexa].second=i;
                indexa++;
                hasha[i]=1;
            }
            if(count[k]==1){
                noofdup++;
                if(flag==0){
                    dupvalue=k;
                    seconddupindex=i;
                    flag=1;
                }
                dup[indexdup].first=k;
                dup[indexdup].second=i;
                indexdup++;
                hashdup[i]=1;
            }
            count[k]++;
            copy[i]=k;
        }
        /*cout<<"hashdup-"<<endl;
        for(i=0;i<n;i++)cout<<hashdup[i]<<" ";
        cout<<endl;*/
        /*cout<<"a[] before sorting"<<endl;
        for(i=0;i<indexa;i++)cout<<a[i].first<<" "<<a[i].second<<endl;
        */
        sort(a,a+indexa);
        sort(dup,dup+indexdup);
        /*cout<<"a[] after sorting"<<endl;
        for(i=0;i<indexa;i++)cout<<a[i].first<<" "<<a[i].second<<endl;
        */
        int store[n],b[n],storedup[n],dupindex=-1;
        ll counter=0,y=0,z=0;  //y=len of store[],z=len of storedup[]
        for(i=0;i<n;i++){
            if(hasha[i]==1){
                store[a[y].second]=y;
                y++;
            }
        }
        for(i=0;i<n;i++){
            if(hashdup[i]==1){
                storedup[dup[z].second]=z;
                z++;
            }
        }
        for(i=0;i<n;i++){
            if(hasha[i]==1)b[i]=a[(store[i]+1)%y].first;
            if(hashdup[i]==1)b[i]=dup[(storedup[i]+1)%z].first;
            if(b[i]!=copy[i])counter++;
        }
        /*cout<<"before swap-"<<endl;
        printf("%lld\n",counter);
        for(i=0;i<n;i++)printf("%d ",b[i]);
        cout<<endl;*/
        if(noofdup==1){
            for(i=0;i<n;i++){
                if(i!=seconddupindex and b[i]==dupvalue){
                    dupindex=i;
                    //i++;
                    break;
                }
            }
            /*for(;i<n;i++){
                if(b[i]==dupvalue){
                    seconddupindex=i;
                    break;
                }
            }*/
            //cout<<"duplicates at:"<<dupindex<<" and  "<<seconddupindex<<endl;
            for(i=0;i<n;i++){
                if(i!=dupindex and i!=seconddupindex and copy[i]!=dupvalue){
                    swap(&b[i],&b[seconddupindex]);
                    break;
                }
            }
            counter=0;
            for(i=0;i<n;i++){
                if(b[i]!=copy[i])counter++;
            }
        }
        
        printf("%lld\n",counter);
        for(i=0;i<n;i++)printf("%d ",b[i]);
        printf("\n");
    }
	return 0;
}

/*
4
6 6 2 2 
ans= 2 2 6 6
4
2 6 2 6
ans=6 2 6 2
5
6 6 5 2 2
ans=2 2 6 5 6
4
2 6 5 2
ans=5 2 2 6
*/