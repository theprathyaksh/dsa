#include<iostream>
using namespace std;
# define N 10
int size=10;
int visited[N];
int top=-1;
int stack[N];
struct node{
int ver;
node *next;
node(int v){
ver=v;
next=NULL;
}
};
void push(int a){
if(top==N)
{
cout<<"stack is full";
}
else{
stack[++top]=a;
}
}
int pop(){
int x;
x=stack[top];
top--;
return x;
}
void dfs(struct node*adjList[]){
int i,j;
int sv;
struct node*temp;
for(i=0;i<N;i++){
visited[i]=0;
}
sv=0;
push(sv);
while(top>=0){
int k=pop();
if(visited[k]==0){
cout<<k;
visited[k]=1;
}
temp=adjList[k];
while(temp!=NULL){
if(visited[temp->ver]==0){
push(temp->ver);
}
temp=temp->next;
}
}
}
void insert(struct node *adjList[],int s,int d){ 
struct node*des=new node(d);
des->next=adjList[s];
adjList[s]=des;
//connecting des to src index;
struct node*src=new node(s);
src->next=adjList[d];
adjList[d]=src;//connecting src to des index;
}// we store the adress of connecting nodes to the first index
int main(){
struct node *adjList[10];
int i;
for(i=0;i<10;i++){
adjList[i]=NULL;
}
insert(adjList,0,  1);
insert(adjList,0,  2);
insert(adjList,1,  3);
insert(adjList,1,  4);
insert(adjList,2,  5);
insert(adjList,2,  6);
insert(adjList,4,  7);
insert(adjList,3,  7);
insert(adjList,5,  7);
insert(adjList,6,  7);
dfs(adjList);
//display(adjList);
}

