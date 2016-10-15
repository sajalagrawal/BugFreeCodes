/*You are required to complete this method*/
int max_sum(int A[],int n)
{
    int sum=0,i,max=0,j,k;
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<n;j++){
            k=(i+j)%n;
            sum+=A[j]*k;
        }
        if(sum>max)max=sum;
    }
    return max;
}
