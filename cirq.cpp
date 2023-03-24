#include<iostream>
using namespace std;
#define N 6
int f=-1;
int r=-1;
int q[N];
void enq(int a){
if(f==-1 && r==-1){
f=r=0;
q[r]=a;
}
else if(f==(r+1)%N){
cout<<"queue is full";
}
else{
r=r+1%N;
q[r]=a;
}
}
int deq(){
int x;
if(f==-1 && r==-1){
cout<<"queue is empty";
}
else if(f==r){
f=r=-1;
}
else{
x=q[f];
f=(f+1)%N;
}
return x;
}
void display(int q[]){
int i;
i=f;
while(i!=r){
cout<<q[i]<<endl;
i=i+1%N;
}
cout<<q[r];
}
int main(){
int i,a;	
enq(50);
enq(5);
enq(51);
enq(52);
enq(53);
cout<<"queue is";
display(q);
deq();
deq();
cout<<"queue is";
display(q);
enq(8);
enq(12);
cout<<"queue is";
display(q);
//cout<<"stack is";
//display(head);
//display(top);
}
