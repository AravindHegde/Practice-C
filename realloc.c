#include<stdio.h>
#include<stdlib.h>
void  main(){
	int n=5;
	int *ptr;
	ptr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		ptr[i]=i+1;
	}
	for(int i=0;i<n;i++){
		printf("%d\t",ptr[i]);
	}
	printf("\n");
//reallocating memory to ArraySize 10
	int n1=10;
	ptr=realloc(ptr,n1*sizeof(int));
	for(int i=n;i<n1;i++){
		ptr[i]=i+1;
	}
	for(int i=0;i<n1;i++){
		printf("%d\t",ptr[i]);
	}
	printf("\n");
//reallocating memory to ArraySize 7
	int n2=7;
	ptr=realloc(ptr,n2*sizeof(int));
	for(int i=0;i<n2;i++){
		printf("%d\t",ptr[i]);
	}
	printf("\n");
	free(ptr);
}
/*Output
1	2	3	4	5	
1	2	3	4	5	6	7	8	9	10	
1	2	3	4	5	6	7	
*/
