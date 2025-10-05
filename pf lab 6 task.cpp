#include<stdio.h>

int main(){
	
	float value;
	int i=0 , j;
	
	for(j=0;j<=100;j++){
	
	printf("enter a value");
	scanf("\n%d",&value);
	
	     if(value!=0){
	     	i=i+value;
		 }
		 else{
		 	break;
		 }
		 
	
   }      
   printf("\n%d", i);
   
   return 0;
}
