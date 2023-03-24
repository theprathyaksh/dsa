#include<stdio.h>
#include<math.h>
#include<ctype.h>
int top=-1;
char stack[20];
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
int pre(char ch)
{
if(ch=='^')
{
return 3;
}
else if(ch=='/' || ch=='*')
{
return 2;
}
else if(ch=='+'|| ch=='-')
{
return 1;
}
else{
return -1;
}
}
int Expression(char expr[],int n)
{
int i;
char c;
for(i=0;i<n;i++){
if((isdigit(expr[i]))){
printf("%c",expr[i]);
}
else {
if(top==-1)
{
push(expr[i],n);
}
else if(pre(expr[i])>pre(stack[top]))
{
push(expr[i],n);
}
else if(pre(expr[i])<=pre(stack[top]))
{
printf("%c",pop(n));
push(expr[i],n);
}
else if(expr[i]=='('){
push(expr[i],n);
}
else if(expr[i]==')'){
while(stack[top]!='('){              
c=pop(n);
}
top++;
while(stack[top]!=')')
{
if(stack[top]=='(')
{
top--;
}
top--;
}
}
/*while(c=pop(n)!='(')
{
if(c!=')' ||c!='(')
printf("%c",c);
}
pop(n);
pop(n);*/
}
}
while(top>-1){
if(stack[top]==')'|| stack[top]=='(')
return 0;
}
return 1;
}
int main(){
double result;
int c=0;
int i;
int k;
char ar[100];
gets(ar);
for(i=0;ar[i]!='\0';i++){
c++;
}
k=Expression(ar,c);
if(k==1){
printf("paranthesis are balanced");
}
else{
printf("paranthesis are not balanced");
}
}

