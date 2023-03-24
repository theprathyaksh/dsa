#include<stdio.h>
#include<math.h>
#include<ctype.h>
int top=-1;
char stack[20];
int co=0;
void push(int a,int n){
stack[++top]=a;
}
char pop( int n){
if(top==-1){
printf("there is no element in the list");
}
else if(stack[top]=='('||stack[top]==')')
top--;
else{
return stack[top--];
}
return 0;
}
int Expression(char expr[],int n)
{
int i;
char c;
for(i=0;i<n;i++){
if(expr[i]=='('){
co++;
}
else if(expr[i]==')'){
co++;
}
}
return co;
}
int main(){
int k;
double result;
int c=0;
int i;
char ar[100];
gets(ar);
for(i=0;ar[i]!='\0';i++){
c++;
}
k=Expression(ar,c);
if(k%2==0){
printf("parnthesis are balanced");
}
else{
printf("parnthesis are  not balanced");
}
}
