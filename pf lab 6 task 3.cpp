#include<stdio.h>

int main(){
	
 int bank_balance=50000;
 int withdrawal_amount,i;
 
 while (bank_balance!=0){
 printf("\nenter amount you want to withdraw ");
 scanf("\n%d", &withdrawal_amount);
    
   if(withdrawal_amount > bank_balance){
       printf("you can not withdraw this much amount\n");
   }
   else{
       printf("withdrawal approved\n");
       bank_balance=bank_balance-withdrawal_amount;
   }
   
  printf("\nbank balance is : %d", bank_balance);
 }

	return 0;
}
