#include<iostream>
using namespace std;
int N=6;
int dq[10];
int f=-1;
int r=-1;
void ef(int a){
if(f==-1 && r==-1)
{
f=r=0;
dq[f]=a;
}
else if(f==0){
f=N-1;
dq[f]=a;
}
else if(f==int((r+1)%N)){
cout<<"queue is full";
}
else{
f=f-1;
dq[f]=a;
}
}
void rf(int a){
if(f==-1&& r==-1)
{
r=0;
dq[r]=a;
}
else{
r=int((r+1)%N);
dq[r]=a;
}
}
void def(){
if(f==-1&& r==-1)
{
cout<<"dequeue is empty";
}
else if(f==r){
f=r=-1;
}
else{
f=int((f+1)%N);
}
}
void der(){
if(f==-1&& r==-1)
{
cout<<"dequeue is empty";
}
else if(f==r){
f=r=-1;
}
else if(r==0)
{
r=N-1;
}
else{
r=r-1;
}
}
void display(int dq[])
{
int i=f;
while(i!=r){
cout<<dq[i];
i=int((i+1)%N);
/*for(i=0;i<N;i++){
cout<<dq[i];*/
}
cout<<dq[r];  ;
}
int main(){
ef(6);
ef(5);
rf(2);
rf(3);
rf(9);
rf(10);
//ef(13);//prints queue is full
display(dq);
cout<<endl;
cout<<"front is";
cout<<f;
cout<<endl;
def();
def();
cout<<"frontafteris";
cout<<f;
cout<<endl;
display(dq);
cout<<"rear is";
cout<<r;
cout<<endl;
der();
der();
cout<<"rearaftrer is";
cout<<r;
cout<<endl;
display(dq);
cout<<endl;
ef(20);
cout<<"frontafteris";
cout<<f;
cout<<endl;
rf(13);
display(dq);
}
