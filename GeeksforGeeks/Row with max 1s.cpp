//http://www.practice.geeksforgeeks.org/problem-page.php?pid=476
//Author- Sajal Agrawal
//Username:sajalagrawal

//if each row of 2D array is sorted
#include <iostream>
using namespace std;

int first(bool a[],int low,int high);
int rowWithMax1s(int n,int m,bool a[][50]);
int main() {
	int t,n,i,m,j;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    bool a[n][50];
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cin>>a[i][j];
	        }
	    }
	    /*for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cout<<a[i][j]<<" ";
	        }
	        cout<<"\n";
	    }*/
	    
	    cout<<rowWithMax1s(n,m,a)<<"\n";
	}
	return 0;
}

int rowWithMax1s(int n,int m,bool a[][50]){
    int i,index,maxIndex=0,max=-1; 
    for(i=0;i<n;i++){
        index=first(a[i],0,m-1);
        if(index!=-1 && (m-index)>max){
            max=m-index;
            maxIndex=i;
        }
    }
    return maxIndex;
}

int first(bool a[],int low,int high){
    while(low<=high){
        int mid=(low+high)/2;
        if(mid==0 || (a[mid]==1 && a[mid-1]==0))
            return mid;
        else if(a[mid]==1)
            return first(a,low,mid-1);
        else if(a[mid]==0)
            return first(a,mid+1,high);
    }
    return -1;
}


//when rows of 2D array are not sorted
#include <iostream>
using namespace std;

int main() {
	int t,n,i,m,j;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    bool a[n][50];
	    int index=0,max=0,count=0;
	    for(i=0;i<n;i++){
	        count=0;
	        for(j=0;j<m;j++){
	            cin>>a[i][j];
	            if(a[i][j]==1)count++;
	        }
	        if(count>max){
	            max=count;
	            index=i;
	        }
	    }
	    cout<<index<<"\n";
	}
	return 0;
}
