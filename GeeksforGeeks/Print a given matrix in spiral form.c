//http://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include<stdio.h>
#define R 3
#define C 4
//function to print spiral of matrix
void printSpiral(int arr[R][C]){
    int i,r=0,c=0,m=R,n=C;
    while(r<m && c<n){
        //Print the first row from the remaining rows
        for(i=c;i<n;i++){
            printf("%d ",arr[r][i]);
        }
        r++;
        //Print the last column from the remaining columns
        for(i=r;i<m;i++){
            printf("%d ",arr[i][n-1]);
        }
        n--;
        //Print the last row from the remaining rows
        if(r<m){
            for(i=n-1;i>=0;i--){
                printf("%d ",arr[m-1][i]);
            }
            m--;
        }
        //Print the first column from the remaining columns
        if(c<n){
            for(i=m-1;i>=r;i--){
                printf("%d ",arr[i][c]);
            }
            c++;
        }
    }
}
int main(){
    int arr[R][C],i,j;
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            arr[i][j]=rand()%21;
        }
    }
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printSpiral(arr);
    return 0;
}
