#include<stdio.h>

int main(){
	
	int num, i;
	int j;
	
	printf("enter number ");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++){
		
		j=num*i;
		printf("\n%d",j);
	}
	return 0;
}
