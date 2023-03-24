#include<iostream>
using namespace std;
int size=10;
struct node{
int ver;
node *next;
node(int v){
ver=v;
next=NULL;
}
};
void insert(struct node *adjList[],int s,int d){
struct node*des=new node(d);
des->next=adjList[s];
adjList[s]=des;
//connecting des to src index;
struct node*src=new node(s);
src->next=adjList[d];
adjList[d]=src;//connecting src to des index;
}// we store the adress of connecting nodes to the first index
void display(struct node *adjList[]){
int v;
for(v=0;v<10;v++){
cout<<v;
struct node*temp=adjList[v];
while(temp){
cout<<temp->ver;
temp=temp->next;
}
cout<<endl;
}
}
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
insert(adjList,6,  7);
insert(adjList,5,  7);
display(adjList);
}

