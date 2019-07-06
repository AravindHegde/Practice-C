#include<stdio.h>
static int a=50;
void main(){
for(int i=0;i<5;i++){
static int x=10;
int y=10;
printf("%d\t%d\n",x,y);
x++;
y++;
}
a=20;
printf("%d\n",a);
}
/* output:
10	10
11	10
12	10
13	10
14	10
20
*/
