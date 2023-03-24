#include<iostream>
using namespace std;
struct node{
int ver;
node*next;
node(int a){
ver=a;
next=NULL;
}
};
int va[10];
int stack[10];
int top=-1;
void push(int a){

stack[++top]=a;
}
int pop(){
int x;
x=stack[top];
top--;
return x;
}
void dfs(struct node*adjList[]){
int i,k;
for(i=0;i<10;i++){
va[i]=0;
}
int sv=0;
push(sv);
va[sv]=1;
while(top!=-1){
k=pop();
cout<<k;
struct node *temp;
temp=adjList[k];
while(temp!=NULL && va[temp->ver]==0){
push(temp->ver);
va[temp->ver]=1;
temp=temp->next;
}
}
}
int main(){
struct node*adjList[10];
int i;
for(i=0;i<10;i++){
adjList[i]=NULL;
}
insert(adjList,0,1);
insert(adjList,0,2);
insert(adjList,1,3);
insert(adjList,1,4);
insert(adjList,2,  5);
insert(adjList,2,  6);
insert(adjList,4,  7);
insert(adjList,3,  7);
insert(adjList,6,  7);
insert(adjList,5,  7);
cout<<"dfs is";
dfs(adjList);
}
