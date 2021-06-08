#include <stdio.h>
#include<string.h>


struct employee
{
    char name[20];
    int empid;
    int exp;
    int salary;

};

void main()
{
    struct employee emp[5];
    int i=1;
    for(i=1;i<=5;i++)
    {
        printf("Employee: %d\n",i);

        printf("\nEnter your Name: ");
        scanf("%s",&emp[i].name);
        printf("\nEnter your Employee ID: ");
        scanf("%d",&emp[i].empid);
        printf("\nEnter Your experience in this Company: ");
        scanf("%d",&emp[i].exp);
        printf("\nEnter your Salary in Rupees: \n");
        scanf("%d",&emp[i].salary);
    }
    for (i=1;i<=5;i++)
    {
        printf("\n");
        printf("\nEmployee Details of Employee %d:\n",i);
        printf("\nName: %s",emp[i].name);
        printf("\nEmployee ID: %d",emp[i].empid);
        printf("\nExperience: %d",emp[i].exp);
        printf("\nSalary: %d",emp[i].salary);

    }

}
