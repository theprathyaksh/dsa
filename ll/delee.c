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
void dele(struct node*head){
if(head==NULL)
printf("list is already empty");
else if(head->next==NULL){
free(head);
head=NULL;
}
else{
struct node *temp=head;
while(temp->next->next!=NULL){
temp=temp->next;
}
free(temp->next);
temp->next=NULL;
}
}
void main()
{
struct node *ptr;
int a,i,p,v;
for(i=0;i<5;i++){
scanf("%d",&a);
Insertail(a);
}
dele(head);
display(head);
}
