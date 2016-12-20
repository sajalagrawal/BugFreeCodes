//https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-cursed-tree/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <stdio.h>
#include<limits.h>
struct node{
	int data;
	struct node *left,*right;
};
typedef struct node NODE;
NODE *root=NULL;
 
NODE* insert(int num,NODE *root);
NODE *lowestCommonAncestor(int x,int y,NODE *root);
int maxValueOnPath(int x,NODE *root);
int max(int a,int b){
	return (a>b)?a:b;
}
int res=0;
int main()
{
    int n,num,x,y,temp;
    scanf("%d",&n);
    
    while(n--){
    	scanf("%d",&num);
    	root=insert(num,root);
    }
    scanf("%d%d",&x,&y);
    if(x>y){
    	temp=x;
    	x=y;
    	y=temp;
    }
    NODE *lca=lowestCommonAncestor(x,y,root);
    int ans=max(maxValueOnPath(x,lca),maxValueOnPath(y,lca));
    printf("%d\n",ans);
    return 0;
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
 
NODE *lowestCommonAncestor(int x,int y,NODE *root){
	if(root->data<x)return lowestCommonAncestor(x,y,root->right);
	if(root->data>y)return lowestCommonAncestor(x,y,root->left);
	return root;
}
 
int maxValueOnPath(int x,NODE *root){
	res=max(res,root->data);
	if(root->data==x)return res;
	else if(x<root->data)return maxValueOnPath(x,root->left);
	return maxValueOnPath(x,root->right);
}
