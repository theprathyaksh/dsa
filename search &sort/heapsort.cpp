#include<iostream>
using namespace std;
void shiftup(int a[],int s,int e){
int c;
int p;
int temp;
for(c=e;c>s;c=p){
p=(c-1)/2;
if(a[p]>a[c]){
temp=a[p];
a[p]=a[c];
a[c]=temp;
}
}
}
void heapify(int a[],int c)
{
int e=1;
int s=0;
while(e<c){
shiftup(a,0,e);
e=e+1;
}
}
int main(){
int a[]={20,10,5,1,2};
int i,j;
heapify(a,5);
for(i=5-1;i>=0;i--){
int temp;
temp=a[0];
a[0]=a[i];
a[i]=temp;
heapify(a,i);
}
for(j=0;j<5;j++){
cout<<endl;
cout<<a[j];
}
}
