#include<stdio.h>
void main(){
//if a and b are not specified as int then it will give warnings but not error...
const int a=10;
//a=30; gives error...
volatile int b=30;
b=20;
printf("%d\t%d\n",a,b);
}
/* Output:
10	20
*/
