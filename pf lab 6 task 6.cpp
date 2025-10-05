#include<stdio.h>
#include<string.h>

int main(){
	
char stri[20];
int length;


printf("enter a number");
scanf("%s",stri);

length = strlen(stri);

int i=length-1;
while(i>=0){
    
    printf("%c",stri[i]);
    i--;
    
}

	return 0;
}
