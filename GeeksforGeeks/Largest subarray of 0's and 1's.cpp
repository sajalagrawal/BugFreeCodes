//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700245
//Author- Sajal Agrawal
//Username:sajalagrawal

/*You are required to complete this method*/
int maxLen(int a[], int n)
{
    int zeros=0,ones=0,i,j,len,max=0;
    for(i=0;i<n;i++){
        zeros=ones=0;
        len=0;
        for(j=i;j<n;j++){
            if(a[j]==0){
                zeros++;
            }
            else if(a[j]==1){
                ones++;
            }
            len=j-i+1;
            if(zeros==ones && ones!=0 && len>max)max=len;
        }
    }
    return max;
}
