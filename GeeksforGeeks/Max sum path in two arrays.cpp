//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700241
//Author- Sajal Agrawal
//Username:sajalagrawal

/*You are required to complete this method*/
 int max_path_sum(int a[], int b[], int m, int n)
{
    int i=0,j=0,res=0,sum1=0,sum2=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            sum1=sum1+a[i];
            i++;
        }else if(b[j]<a[i]){
            sum2=sum2+b[j];
            j++;
        }else{
            res=res+max(sum1,sum2);
            sum1=sum2=0;
            while(i<m && j<n && a[i]==b[j]){
                res=res+a[i];
                i++;
                j++;
            }
        }
    }
    while(i<m){
        sum1=sum1+a[i];
        i++;
    }
    while(j<n){
        sum2=sum2+b[j];
        j++;
    }
    res=res+max(sum1,sum2);
    return res;
}

int max(int a,int b){
    return (a>b)?a:b;
}
