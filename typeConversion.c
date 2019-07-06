#include<stdio.h>
void main(){
float a=10.8,b=6.5;
int c=2;
int res1=0;
res1=a+b+c;//auto conversion i.e., Type conversion(Done By Compiler)
printf("result is %d\n",(int)(a+b));//Conversion required i.e.,Type Casting(Has to be done explicitly)
printf("result is %d\n",((int)a+(int)b));
printf("result is %d\n",res1);
}
/* Output:
result is 17
result is 16
result is 19
*/
