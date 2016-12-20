//https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-watching-fight/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <stdio.h>
struct node{
	int data;
	struct node *left,*right;
};
typedef struct node NODE;
NODE *root=NULL;
 
int height(NODE *root);
NODE *insert(int num,NODE *root);
int max(int a,int b){
	return (a>b)?a:b;
}
int main()
{
    int n,num;
    scanf("%d",&n);
    while(n--){
    	scanf("%d",&num);
    	root=insert(num,root);
    }
    printf("%d",height(root));
    return 0;
}
 
int height(NODE *root){
	if(root==NULL)return 0;
	return(1+max(height(root->left),height(root->right)));
}
 
NODE *insert(int num,NODE *root){
	if(root==NULL){
		NODE *temp=(NODE*)malloc(sizeof(NODE));
		temp->data=num;
		temp->left=temp->right=NULL;
		return temp;
	}else if(root->data>=num)root->left=insert(num,root->left);
	else root->right=insert(num,root->right);
	return root;
}
