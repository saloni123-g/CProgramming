#include<stdio.h>
struct employee
{
    int age,phoneno,salary;
    char name[25];
}emp[100];

 main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as  name , age ,phoneno, salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",emp[i].name,&emp[i].age,&emp[i].phoneno,&emp[i].salary);
    }
    printf("\nEMP_NAME\tEMP_AGE\t\tEMP_PHONENUMBER\t\tEMP_SAL\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].phoneno,emp[i].salary);
    }

return 0;
}
