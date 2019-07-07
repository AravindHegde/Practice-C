#include<stdio.h>
void main(){
FILE *fp;
fp=fopen("input.txt","w");
fprintf(fp,"%s\t%s\t%s\t%s\n","My","Name","is","Altair");
fclose(fp);
fp=fopen("input.txt","r");
char ar[20];
fscanf(fp,"%s",ar);
while(!feof(fp)){
printf("%s\t",ar);
fscanf(fp,"%s",ar);
}
printf("\n");
fclose(fp);
}
