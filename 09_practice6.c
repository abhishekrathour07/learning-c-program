#include<stdio.h>
#include<string.h>
struct Account{
   char name[30];
   long long int ACnum;
   char BankName[30];
   int balance;
};
void main(){
   struct Account a1,a2,a3,a4;
   
   a1.balance = 4500;
   a1.ACnum= 36636366436646 ;
   strcpy(a1.name ,"Abhishek singh");
   strcpy(a1.BankName,"IndianPostpaymentsBank");

a2.balance = 4500;
   strcpy(a2.name ,"saurabh patel");
   a2.ACnum= 459874635242;
   strcpy(a2.BankName,"Bank_of_baroda");
   
a3.balance = 4500;
   strcpy(a3.name ,"ayush sharma");
   a3.ACnum= 25257310025;
   strcpy(a3.BankName,"stateBankofIndia");

   a4.balance = 4500;
   strcpy(a4.name ,"Aman Ansari");
   a4.ACnum=8080402050123;
   strcpy(a4.BankName,"SLicePAy");
   
printf("The name of the bank is : %s\n",a1.BankName);
   printf("The name of the customer is : %s\n",a1.name);
   printf("The Account number of the customer is : %d\n",a1.ACnum);
   printf("The Balance in the customer Account  is : %d\n",a1.balance);

printf("The name of the bank is : %s\n",a2.BankName);
   printf("The name of the customer is : %s\n",a2.name);
   printf("The Account number of the customer is : %d\n",a2.ACnum);
   printf("The Balance in the customer Account  is : %d\n",a2.balance);

printf("The name of the bank is : %s\n",a3.BankName);
   printf("The name of the customer is : %s\n",a3.name);
   printf("The Account number of the customer is : %d\n",a3.ACnum);
   printf("The Balance in the customer Account  is : %d\n",a3.balance);

printf("The name of the bank is : %s\n",a4.BankName);
   printf("The name of the customer is : %s\n",a4.name);
   printf("The Account number of the customer is : %d\n",a4.ACnum);
   printf("The Balance in the customer Account  is : %d\n",a4.balance);
}