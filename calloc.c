#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr;
	ptr=(int*) calloc(5,sizeof(int));
	for(int i=0;i<5;i++){
		ptr[i]=i+1;
	}
	for(int i=0;i<5;ptr++,i++){
		printf("%d\n",*ptr);
	}
	ptr=ptr-5;
	free(ptr);
	printf("Memory successfully Freed\n");
}
/* Output
1
2
3
4
5
Memory successfully Freed
*/
