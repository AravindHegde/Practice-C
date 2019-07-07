#include<stdio.h>
#include<string.h>
struct name{
char n1[20];
char n2[20];
};
struct price{
float pr;
float discount;
};
struct games{
int sl_no;
struct name a;
struct price b;
}inst;

void main(){
strcpy(inst.a.n1,"Assassins");
strcpy(inst.a.n2,"Creed");
inst.b.pr=1000.00f;
inst.b.discount=100.00f;
inst.sl_no=1;
printf("Serial no: %d\nGame :%s %s\n",inst.sl_no,inst.a.n1,inst.a.n2);
printf("Amount to pay is %f\n",(inst.b.pr-inst.b.discount));
printf("size of structure \"name\" is %d\n",sizeof(inst.a));//20+20=40
printf("size of structure \"price\" is %d\n",sizeof(inst.b));//4+4=8
printf("size of structure \"games\" is %d\n",sizeof(inst));//4+40+8=52
}
/* Output
Serial no: 1
Game :Assassins Creed
Amount to pay is 900.000000
size of structure "name" is 40
size of structure "price" is 8
size of structure "games" is 52
*/
