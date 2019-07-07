#include<stdio.h>
void main(){
char ar[]="Aravind";
char a[10]={'a','b','c','d','e'};
char *p1,*p2;
char *p3="String";
p1=ar;//or p1=&ar[0]
p2=&a[0];
p2[6]='\0';
printf("String is %s\n",p1);
printf("String from 3rd letter is %s\n",p1+2);
printf("String from 3rd letter is %s\n",ar+2);
for(int i=0;i<5;i++,p2++)
printf("%c\t",*p2);
for(int i=0;i<sizeof(ar)/sizeof(ar[0]);i++,p1++)
printf("%c\t",*p1);
}
