//http://www.geeksforgeeks.org/determinant-of-a-matrix/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include<stdio.h>
#define N 4
//stores elements other than element's particular row and column
void storeCofactor(int mat[N][N],int temp[N][N],int p,int q,int n){
    int i=0,j=0,row,col;
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            if(row!=p && col!=q){
                temp[i][j]=mat[row][col];
                j++;
            }
            if(j==n-1){
                i++;
                j=0;
            }
        }
    }
}
//returns determinant of mat[N][N]
int determinant(int mat[N][N],int n){
    int det=0,i;
    if(n==1)return mat[0][0];

    int temp[N][N],sign=1;
    for(i=0;i<n;i++){
        storeCofactor(mat,temp,0,i,n);
        det+=sign*mat[0][i]*determinant(temp,n-1);
        sign=-sign;
    }
    return det;
}

int main(){
     int mat[N][N] = {{1,2,3,4},
                     {5,6,7,8},
                     {1,0,1,0},
                     {1,2,1,0}
                    };
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Determinant of matrix: %d",determinant(mat,N));
    return 0;
}
