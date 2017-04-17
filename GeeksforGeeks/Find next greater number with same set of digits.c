//http://www.geeksforgeeks.org/find-next-greater-number-set-digits/

#include <stdio.h>
#include <string.h>
//function to swap two characters
void swap(char* a,char* b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
//function to perform bubble sort
void bubbleSort(char arr[],int start,int n){
   int i, j,k;
   for (i = start,k=0; i < n-1; i++,k++)
       // Last k elements are already in place
       for (j = start; j < n-k-1; j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
       }
}
//find next permutation
void findNext(char num[]){
    int n=strlen(num);
    int i,j;
    //starting from the end finding the largest element
    for(i=n-1;i>0;i--){
        if(num[i]>num[i-1])break;
    }
    if(i==0){
        printf("No bigger permutation.");
        return;
    }
    int x=num[i-1],smallest=num[i],index=i,start=i;
    for(j=i+1;j<n;j++){
        if(num[j]>x && num[j]<smallest){
            smallest=num[j];
            index=j;
        }
    }
    swap(&num[i-1],&num[index]);
    bubbleSort(num,start,n);
    printf("Next smallest permutation:%s",num);
    return;
}

int main(void) {
    char num[20];
    printf("Enter num:");
    scanf("%s",num);
    findNext(num);
	return 0;
}
