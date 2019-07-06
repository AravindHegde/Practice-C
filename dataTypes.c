#include<stdio.h>
void main(){
int a=20;
float b=30;
char ar[]="Aravind";
printf("%6d\n",a);//4 space + 2 digit number => 4 + 2 = 6
printf("%-6d%06d%-06d\n",a,a,a);
printf("%6.2f\n",b);//1 space + 2 digit + 1 dot + 2 decimal =>1+2+2+1+2=6
printf("%06.2f\n",b); 
printf("%8.4s\n",ar);//4 space + 4 characters => 4 + 4=8
printf("%08.4s\n",ar);
}
/* Output:
    20
20    00002020    
 30.00
030.00
    Arav
    Arav
*/
