#include<stdio.h>

int main(){
	
int num;
int i;
int j=1;

printf("enter number of participants\n");
scanf("%d",&num);

for(i=num;i>=1;i--){
    
    printf("\n%d", i);
    j=j*i;
}
printf("\ntotal number of arrangements are %d",j);

	return 0;
}
