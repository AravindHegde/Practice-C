#include<stdio.h>
#include<string.h>
struct str{
char name[30];
int number;
}ins;
void main(){
strcpy(ins.name,"Altair");
ins.number=19;
struct str *ptr;
ptr=&ins;
printf("name :%s\nnumber :%d\n",ptr->name,ptr->number);
}
