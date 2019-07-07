#include<stdio.h>
void main(){
FILE *fp;
char c='\0',inp[20];
fp=fopen("input.txt","w");
while((c=getchar())!='1'){
putc(c,fp);
}
fclose(fp);
fp=fopen("input.txt","r");
while((c=getc(fp))!=EOF){
printf("%c",c);
}
printf("\n");
fclose(fp);
}
/* Output
Assassins creed1
Assassins creed
*/
