//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1541
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
  char str[1000];
  struct stack *next;
};
typedef struct stack STACK;
STACK *top=NULL;
void push(char abc[]);
void pop();
int sizeofStack();
void displayStacks();
int main() {
    int t,n;
	char cur[1000]="00000000";
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    while(n--){
	        //cout<<"n="<<n<<"\n";
	        scanf("%s",cur);
	        if(top!=NULL && strcmp(cur,top->str)==0){
	            pop();
	        }
	        else if(top==NULL || strcmp(cur,top->str)!=0) push(cur);
	        //cur=nxt;
	        //strcpy(cur,nxt); //des,source
	    }
	    //displayStacks();
	    //cout<<sizeofStack()<<"\n";cout<<"\n";
	    printf("%d\n",sizeofStack());
	    
	}
	return 0;
}
/*
void displayStacks(){
    if(top==NULL){
        printf("empty");
    }else{
        STACK *temp=top;
        for(int i=0;i<sizeofStack();i++){
            printf("%s ",top->str);
            temp=temp->next;
        } 
    }
}*/
int sizeofStack(){
    //STACK *temp=top;
    int size=0;
    while(top!=NULL){
        size++;
        pop();
    }
    return size;
}

void push(char abc[]){
    STACK *neww=(STACK*)malloc(sizeof(STACK));
    //neww->str=abc;
    strcpy(neww->str,abc); //des,source
    neww->next=top;
    top=neww;
    //cout<<"pushed-"<<abc<<"\n";
    //printf("%s ",abc);
}

void pop(){
    if(top==NULL){
        return;
    }
    STACK *del=top;
    top=top->next;
    free(del);
    return;
}
