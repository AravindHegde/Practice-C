#include<stdio.h>
void oper(int a,int b,int *sum,int *diff){
*sum=a+b;
*diff=a-b;
}
void main(){
int a=10;
int b=20;
int *p,*q;
p=&a;
q=&b;
oper(a,b,p,q);
printf("sum :%d\ndiff :%d\n",*p,*q);
}
