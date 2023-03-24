#include<stdio.h>
#include<stdlib.h>
int search(int arr[],int key,int n){
int i;
int j;
int temp;
for(i=0;i<n;i++){
if(arr[i]==key){
return i;
}
}
return -1;
}
int main(){
int k;
int arr[]={5,4,3,2,6,1};
printf("%d",search(arr,6,5));
}
