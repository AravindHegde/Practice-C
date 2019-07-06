#include<stdio.h>
void main(){
int a=sizeof(int),b=sizeof(long),c=sizeof(char),d=sizeof(float),e=sizeof(short);
char ar[]="Aravind";
int z=sizeof(ar);
printf("int :%d\nlong :%d\nchar :%d\nfloat :%d\nshort :%d\nString :%d\n",a,b,c,d,e,z);
int x=10;
int arr[]={1,2,3,4,5};
int r=sizeof(x);
int s=sizeof(arr);
printf("int variable :%d\nint array :%d\n",r,s);
}
/*
int :4
long :8
char :1
float :4
short :2
String :8
int variable :4
int array :20
*/
