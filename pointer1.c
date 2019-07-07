#include<stdio.h>
void main(){
int i=10,*p1=&i,*p2;
p2=&i;
printf("Address of i(pointer p1) is %d\n",p1);
printf("And %d is stored at %d\n",p1,&p1);
printf("Address of i(pointer p2) is %d\n",p2);
printf("value of i is %d\n",*(&(*p2)));
*p2=20;
printf("Value of i after changing is %d\n",*p1);
int arr[5]={0,1,2,3,4};
p1=arr;//or p1=&arr[0]
printf("starting address of array is %d\n",p1);
printf("next address(in array) is %d\n",(p1+1));
printf("next address(after array) is %d\n",(&arr+1));
int size=*(&arr+1)-arr;
/* OR
int st=p1;
int en=(&arr)+1;
size=(en-st)/4;//4 because size of int is 4
*/
printf("length of array is %d\n",size);
p2=p1;
printf("values in arrays are :\n");
for(int m=0;m<5;m++){
printf("%d\t",*(p2++));
}
}
/* Output is
Address of i(pointer p1) is 861410060
And 861410060 is stored at 861410048
Address of i(pointer p2) is 861410060
value of i is 10
Value of i after changing is 20
starting address of array is 861410016
next address(in array) is 861410020
next address(after array) is 861410036
length of array is 5
values in arrays are :
0	1	2	3	4	
*/
