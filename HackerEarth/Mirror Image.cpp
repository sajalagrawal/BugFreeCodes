//https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/practice-problems/algorithm/mirror-image-2/
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
struct Node{
    int data;
    Node *left,*right;
    Node(int d){
        data=d;
        left=right=NULL;
    }
};
vector<char> vec;
void insert(Node *root,int a,int b,char ch){
    if(root==NULL)return;
    if(root->data==a){
        switch(ch){
            case 'L':root->left=new Node(b);
                    break;
            case 'R':root->right=new Node(b);
                    break;
        }
    }else{
        insert(root->left,a,b,ch);
        insert(root->right,a,b,ch);
    }
}

void preOrderDisplay(Node *r){
    if(r!=NULL){
        printf("%d ",r->data);
        preOrderDisplay(r->left);
        preOrderDisplay(r->right);
    }
}

int saveRoute(Node *root,int q){
    if(root==NULL){
        return 0;
    }
    if(root->data==q){
        return 1;
    }
    
    if(saveRoute(root->left,q)==1){
        vec.push_back('L');
        return 1;
    }
    if(saveRoute(root->right,q)==1){
        vec.push_back('R');
        return 1;
    }
    return 0;
}
int move(Node *root){
    for(int i=vec.size()-1;i>=0;i--){
        if(vec[i]=='L'){
            if(root->right!=NULL){
                root=root->right;
            }else{
                return -1;
            }
        }else{
            if(root->left!=NULL){
                root=root->left;
            }else{
                return -1;
            }
        }
    }
    return root->data;
}
int main() {
    int n,q,foo;
    cin>>n>>q;
    Node *root=NULL;
    n--;
    while(n--){
        int a,b;
        char ch;
        cin>>a>>b>>ch;
        if(root==NULL){
            root=new Node(a);
            switch(ch){
                case 'L':root->left=new Node(b);
                        break;
                case 'R':root->right=new Node(b);
                        break;
            }
        }else{
            insert(root,a,b,ch);
        }
    }
    while(q--){
        cin>>foo;
        vec.clear();
        if(foo==1)printf("1\n");
        else{
            saveRoute(root,foo);
            //for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";
            printf("%d\n",move(root));   
        }
    }
	return 0;
}
