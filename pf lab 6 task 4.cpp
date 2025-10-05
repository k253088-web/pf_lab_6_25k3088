#include<stdio.h>

int main(){
	
int num;
int i,j,k;
int p;

printf("enter a 3 digit number");
scanf("\n%d" , &num);

printf("enter 1st digit of the number");
scanf("\n%d", &i);

printf("enter 2st digit of the number");
scanf("\n%d", &j);

printf("enter 3st digit of the number");
scanf("\n%d", &k);

p=(i*i*i)+(j*j*j)+(k*k*k);

if(p==num){
    printf("\n%d is an armstrong number",num);
}
else{
    printf("%d is not an armstrong number",num);
}

	return 0;
}
