#include<stdio.h>
int main()
{
  char name[20];
  char gender[10];
  char father_name[20];
  char mother_name[20];
  int date_of_birth[12];//Format:DD-MM-YYYY
  int age;
  char bloodgroup[5];
  char nationality[20];
  char religion[20];
  char college[100];
  char hsc[100];
  int hsc_mark;
  int sslc_mark;
  char hobbies[100];
  char address[150];
  char email[100];
  char mobile_number[10];

  printf("Enter your name: ");
  scanf("%s", name);
  printf("Enter your gender: ");
  scanf("%s", gender);
  printf("Enter your father name: ");
  scanf("%s", father_name);
  printf("Enter your mother name: ");
  scanf("%s", mother_name);
  printf("Enter your date of birth(DD-MM-YYYY): ");
  scanf("%11S", &date_of_birth);
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your blood group: ");
  scanf("%s", bloodgroup);
  printf("Enter your nationality: ");
  scanf("%s", nationality);
  printf("Enter your religion: ");
  scanf("%s", religion);
  printf("Enter your college name: ");
  scanf(" %[^\n]", college);
  printf("Enter your higher secondary school: ");
  scanf(" %[^\n]", hsc);
  printf("Enter your 12th mark: ");
  scanf("%d", &hsc_mark);
  printf("Enter your 10th mark: ");
  scanf("%d", &sslc_mark);
  printf("Enter your hobbies: ");
  scanf(" %[^\n]", hobbies);
  printf("Enter your address: ");
  scanf(" %[^\n]", address);
  printf("Enter your Email ID: ");
  scanf("%s", email);
  printf("Enter your mobile number: ");
  scanf("%s", mobile_number);


  printf("\n--------BIO DATA--------\n");
  printf("Name                      : %s\n", name);
  printf("Gender                    : %s\n", gender);
  printf("Father's Name             : %s\n", father_name);
  printf("Mother's Name             : %s\n", mother_name);
  printf("Date Of Birth             : %S\n", date_of_birth);
  printf("Age                       : %d\n", age);
  printf("Blood Group               : %s\n", bloodgroup);
  printf("Nationality               : %s\n", nationality);
  printf("Religion                  : %s\n", religion);
  printf("College                   : %s\n", college);
  printf("HSC                       : %s\n", hsc);
  printf("12th mark                 : %d\n", hsc_mark);
  printf("10th mark                 : %d\n", sslc_mark);
  printf("Hobbies                   : %s\n", hobbies);
  printf("Address                   : %s\n", address);
  printf("Email ID                  : %s\n", email);
  printf("Mobile Number             : %s\n", mobile_number);

  return 0;
}
