#include<stdio.h>
#include<string.h>
void main(){
	char fname[20]="Aravind";
	char nname[20]="";
	char lname[20]="Hegde";
	char total[20]="";
	char sname[20]="ra";
	printf("Length of first name is %d\n",strlen(fname));
	if(strcmp(fname,lname)==0){
		printf("First name and last name are equal\n");
	}
	else
		printf("First name and last name are different\n");
	//printf("Last name %s\n",lname);
	strcpy(total,fname);
	printf("copied name is %s\n",total);
	strcat(total,lname);
	printf("Full name is %s\n",total);
	strncpy(nname,fname,4);
	printf("Nick name is %s\n",nname);
	if(strncmp(total,fname,5)==0)
		printf("substring is equal\n");
	else if(strncmp(total,fname,5)<0)
		printf("full name is less than first name\n");
	else
		printf("first name is less than full name\n");
	strncat(fname,lname,1);
	printf("Short name is %s\n",fname);
	if(strstr(fname,sname)==NULL){
		printf("Substring is not present\n");
	}
	else{
		printf("Substring is present\n");
	}
	char s='e';
	printf("first occurence of e is at %d\n",(strchr(total,s)-total));
	printf("last occurence of e is at %d\n",(strrchr(total,s)-total));

}

/*Output:
Length of first name is 7
First name and last name are different
copied name is Aravind
Full name is AravindHegde
Nick name is Arav
substring is equal
Short name is AravindH
Substring is present
first occurence of e is at 8
last occurence of e is at 11
*/
