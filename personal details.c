#include<stdio.h>
int main()
{
 char name[50];
 int age;
 char gender[100];
 char bloodgroup[5];
 long long mobilenumber;

 printf("Enter your name: ");
 scanf("%s",name);
 printf("Enter your age: ");
 scanf("%d",&age);
 printf("Enter your gender(M/F): ");
 scanf("%s",&gender);
 printf("Enter your blood group: ");
 scanf("%s", bloodgroup);
 printf("Enter your mobile number: ");
 scanf("%lld",&mobilenumber);

 printf("\nPersonal details: \n");
 printf("Name              : %s\n",name);
 printf("Age               : %d\n",age);
 printf("Gender            : %s\n",gender);
 printf("Blood Group       : %s\n", bloodgroup);
 printf("Mobile number     : %lld\n",mobilenumber);

 return 0;
}
