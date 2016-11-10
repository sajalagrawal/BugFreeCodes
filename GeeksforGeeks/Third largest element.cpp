//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700312
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

 /* The function should return third largest element 
     in arr[0..n-1]. It may be assumed that all elements
     are distinct.  */
int thirdLargest(int a[], int n)
{
    if(n<3)
        return -1;
    int INTMIN=-99999;
    int m1=INTMIN,m2=INTMIN,m3=INTMIN,i;
    for(i=0;i<n;i++){
         if(a[i]>m1){
             m3=m2;
             m2=m1;
             m1=a[i];
         }else if(a[i]>m2){
             m3=m2;
             m2=a[i];
         }else if(a[i]>m3){
             m3=a[i];
         }
    }
     return m3;
}
