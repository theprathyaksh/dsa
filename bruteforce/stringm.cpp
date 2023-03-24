#include<iostream>
#include<string>
int flag1=0;
int k1=-1;
using namespace std;
int match(string fi,string se){
int l1=fi.size();
int l2=se.size();
int i,j;
int k=0;
for(i=0;i<l1-l2;i++){
int flag=0;
for(j=0;j<l2;j++){
if(fi[i]!=se[j]){
flag=1;
break;
}
else if(fi[i]==se[j]){
if(k1==-1){
k1=i;
}
i++;
}
}
if(flag==0){
flag1=1;
return 1;
}
}
if(flag1==0){
return 0;
}
return -1;
}
int main(){
string fi;
string se;
cout<<"Input the strings"<<endl;
cout<<"s1"<<endl;
cin>>fi;
cout<<"s2"<<endl;
cin>>se;
int i;
i=match(fi,se);
if(i==1){
cout<<"string match found at "<<k1;
}
else if(i==0){
cout<<"string match not found";
}
}

