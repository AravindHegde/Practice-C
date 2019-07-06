#include<stdio.h>
void main(){
int a=49;
float b=55;
char c='a';
char z=(float)(int)b;
printf("int to float :%f\n",(float)a);
printf("float to int :%d\n",(int)b);
printf("char to ascii int:%d\n",c);
printf("int to char :%c\n",a);
printf("char to ascii float :%f\n",c);
printf("float->int->char :%c\n",(int)b);//if no type casting.. then it will print junk value
printf("%c\n",z);
}
/* Output:
int to float :49.000000
float to int :55
char to ascii int:97
int to char :1
char to ascii float :49.000000
float->int->char :7
7
*/
