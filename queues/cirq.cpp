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
else if(rear+1%N==front){
cout<<"queue is overloaded";
}
else{
rear=(rear+1)%N;
Queue[rear]=a;
}
}
void deq(int N){
int x;
if(front==-1 && rear==-1){
cout<<"it is empty list";
}
else if(front==rear){
front=rear=-1;
}
else{
front=(front+1)%N;
}
}
void display(int Queue[]){
int i=front;
if(front==-1 && rear==-1){
cout<<"queue is empty";
}
else{
while(i!=rear){
cout<<Queue[i];
i=(i+1)%N;
}
cout<<Queue[rear];
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
display(Queue);
deq(N);
deq(N);
cout<<"list is";
display(Queue);
cout<<endl;
enq(10,N);
enq(9,N);
cout<<"list1 is";
display(Queue);

}


