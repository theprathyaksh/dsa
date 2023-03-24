#include<stdio.h>
#include<stdlib.h>
struct node *createnode(int val);
void display(struct node *head);
void Insertail(int val);
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
void Insertail(int val)
{
struct node *nn,*temp;
nn=createnode(val);
if(head==NULL){
head=nn;
}
else{
temp=head;
while(temp->next!=NULL)
temp=temp->next;

temp->next=nn;
}}
void display(struct node *head){
struct node *temp;
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
struct node *del(struct node*head){
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
struct node *ptr;
int a,i,p,v;
for(i=0;i<5;i++){
scanf("%d",&a);
Insertail(a);
}
printf("del at begin\n");
ptr=del(head);//here are we are returning the pointer such that it will update with new head.
display(ptr);
}
