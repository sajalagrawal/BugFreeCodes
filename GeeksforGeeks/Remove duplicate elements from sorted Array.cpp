//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700246
//Author- Sajal Agrawal
//Username:sajalagrawal

/*You are required to complete this function */
int remove_duplicate(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;){
    	if(a[i]==a[i+1]){
    		j=i+1;
    		for(;j<n;j++){
    		    a[j-1]=a[j];
    	    }   
    		n--;
	    }else i++;
    }
    return n;
}
