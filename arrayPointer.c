#include<stdio.h>
void main(){
int a=10,b=20,c=30;
int *p[3]={&a,&b,&c};//3 pointers pointing to 3 elements in array..
for(int i=0;i<3;i++){
printf("%d\t",*p[i]);
}
printf("\n");
int (*p2)[3];
int ar[3]={a+10,b+20,c+30};
p2=&ar;//one pointer pointing to array of e elements..
for(int i=0;i<3;i++){
printf("%d\t",*(p2[0]+i));
}
printf("\n");

char *name[3]={"Altair","Ezio","Connor"};
for(int i=0;i<3;i++){
printf("%s\t",name[i]+2);
}
printf("\n");
}
