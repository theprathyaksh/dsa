#include<stdio.h>
#include<stdlib.h>
struct node *createnode(int val);
void display(struct node *head);
void Insertail(int val);
void inserthead(int value);
struct node*head=NULL;
struct node{
int data;
struct node *next;
};
struct node *createnode(int val)
{
struct node *nn;
nn=(struct node*)malloc(sizeof(struct node));
nn->data=val;
nn->next=NULL;
return nn;
}
void enq(int val){
struct node *nn,*temp;
nn=createnode(val);
if(head==NULL){
head=nn;
}
else{
nn->next=head;
head=nn;
}
} 
struct node *deq(struct node*head){
struct node *temp;
if(head==NULL)
{
printf("list is already empty");
}
else{
temp=head;
head=head->next;
free(temp);
temp=NULL;
}
return head;
}
void main()
{
enq(5);
enq(6);
enq(7);
deq();
display(head);
}
