#include<iostream>
using namespace std;
#define N 6
int f=-1;
int r=-1;
int q[N];
void enqr(int a){
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
void enqf(int a){
if(f==0){
f=N-1;
q[f]=a;
}
else{
f=f-1%N;
q[f]=a;
}
}
int deqf(){
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
int deqr(){
int x;
if(f==-1 && r==-1){
cout<<"queue is empty";
}
else if(f==r){
f=r=-1;
}
else if(r==0){
r=N-1;
}
else{
r=r-1;
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
enqr(50);
enqr(5);
enqr(34);
enqr(22);
enqr(34);
cout<<"queue is";
display(q);
deqf();
deqf();
enqf(52);
enqf(53);
cout<<"queue is";
display(q);
deqr();
deqf();
cout<<"queue is";
display(q);
/*enq(8);
enq(12);
cout<<"queue is";
display(q);
//cout<<"stack is";
//display(head);
//display(top);*/
}
