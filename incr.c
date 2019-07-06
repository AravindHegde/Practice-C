#include<stdio.h>
void main(){
int i=5;
printf("%d\t%d\t%d\n",i++,i++,i++);
i=5;
printf("%d\t%d\t%d\n",++i,++i,++i);
}
/* Output:
7	6	5
8	8	8
*/
