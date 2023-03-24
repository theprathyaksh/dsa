#include<iostream>
using namespace std;
#define N 6
int top1=-1;
int top2=-1;
int s1[N];
int s2[N];
void enq(int a){
if(top1==N-1){
cout<<"queue is full";
}
else{
s1[++top1]=a;
}
}
void deq(){
while(top1!=-1){
s2[++top2]=s1[top1--];
}
top2--;
while(top2!=-1){
s1[++top1]=s2[top2--];
}
}
void display(){
int i;
for(i=0;i<=top1;i++){
cout<<s1[i];
}
}
int main(){
enq(1);
enq(2);
enq(3);
enq(4);
enq(5);
enq(6);
//display();
cout<<"before;"<<endl;
display();
deq();
deq();
cout<<"after"<<endl;
display();
}
