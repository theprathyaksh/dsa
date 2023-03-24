#include<iostream>
using namespace std;
int N;
int front=-1;
int rear=-1;
int Queue[10];
void enq(int a,int N){
if(rear==-1&& front==-1){
rear=front=0;
Queue[rear]=a;
}
else if(rear==N-1){
cout<<"queue is overloaded";
}
else{
Queue[++rear]=a;
}
}
int search(int k){
int i=front;
while(i<=rear){
if(Queue[i]==k){
return i;
break;
}
}
return -1;
}
void deq(int N){
int x;
if(front==-1 && rear==-1){
cout<<"it is empty list";
}
else{
Queue[front++];
}
}
int main(){
int i,a;
cin>>N;
for(i=0;i<N;i++){
cin>>a;
enq(a,N);
}
cout<<"list1 is";
for(i=front;i<=rear;i++){
cout<<Queue[i];
cout<<endl;
}
deq(N);
deq(N);
cout<<"list is";
for(i=front;i<rear;i++){
cout<<Queue[i];
}
cout<<"key found in queue at";
cout<<search(3);
}

