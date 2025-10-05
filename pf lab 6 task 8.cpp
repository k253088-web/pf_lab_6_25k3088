#include<stdio.h>
#include<math.h>

int main(){
	double M,s,i;
 


printf("enter intensity of of the quake");
scanf(" %lf",&i);
printf("enter standard reference value\n");
scanf(" %lf",&s);

M=log10(i/s);

printf("magnitude of eathquake is: %f", M);
return 0;
}
