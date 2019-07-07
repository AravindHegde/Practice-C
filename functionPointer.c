#include<stdio.h>
int mul(int a,int b){
return a*b;
}
void main(){
int a=10,b=20;
int (*p1)();
p1=mul;
printf("ans is %d\n",(*p1)(a,b));
}
/* Output
ans is 200
*/

