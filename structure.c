/*
#include<stdio.h>
struct student
{
    char name[30];
    int age;
    float totalmark[3];

};
int main()
{
    int i;
    struct student st[2];
    for(i=0; i<2; i++)
    {
        printf("\nEnter your name :");
        scanf("%s", &st[i].name);
        printf("\nEnter your age :");
        scanf("%d", &st[i].age);
        printf("\nEnter your total mark : ");
        scanf("%lf",  &st[i].totalmark);
        printf("\n");

    }


    printf("Details about the students");
    for  (i=0; i<2; i++){
    printf("\nName : %s \nAge: %d \nTotal Mark : %lf", st[i].name,st[i].age, st[i].totalmark);
    printf("\n");
    }
    return 0;
}
*/

#include<stdio.h>
struct employee
{
    char name[30];
    char id[50];
    int salary;

};
int main()
{
    int i;
    struct employee st[3];
    for(i=0; i<2; i++)
    {
        printf("\nEnter your name :");
        scanf("%s", &st[i].name);
        printf("\nEnter your ID :");
        scanf("%s", &st[i].id);
        printf("\nEnter your salary : ");
        scanf("%d",  &st[i].salary);
        printf("\n");

    }


    printf("Details about the employees");
    for  (i=0; i<2; i++){
    printf("\nName : %s \nID: %s \nSalary : %d", st[i].name,st[i].id, st[i].salary);
    printf("\n");
    }
    {

    if(st[i=0].salary >st[i=1].salary && st[i=0].salary > st[i=3].salary )
    {
        printf("First employee got more salary");
    }
    if else (st[i=1].salary >st[i=0].salary &&  st[i=1].salary > st[i=2].salary)
    {
        printf("Second employee got more salary");
    }
    else
    {
        printf("Third employee got more salary");
    }

    }
    return 0;
}

