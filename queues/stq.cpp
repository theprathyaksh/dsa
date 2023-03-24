#include<iostream>
using namespace std;
int ins[5];
int ous[5];
int top1=-1;
int top2=-1;
void push(int a,int N){
if(top1==N-1){
cout<<"queue is full";
}
top1=top1+1;
ins[top1]=a;
//cout<<"e is";
//cout<<ins[top1];
}
void pop(){
if(top1==-1){
cout<<"queue is empty";
}
else{
if(top2<0){
while(top1!=-1){
ous[++top2]=ins[top1--];
}
top2--;
while(top2!=-1){
ins[++top1]=ous[top2--];
}
}
}
}
void enq(int a ,int N){
push(a,N);
}
void deq(){
pop();
}

void display(int ins[],int N){
int i;
for(i=0;i<=top1;i++){
cout<<ins[i];
}
}
int main(){
int i;
int N=5;
enq(2,N);
enq(4,N);
enq(3,N);
enq(1,N);
enq(5,N);
display(ins,N);
cout<<"after deleting";
cout<<endl;
deq();
deq();
display(ins,N);
cout<<"after inserting";
enq(9,N);
display(ins,N);
}
