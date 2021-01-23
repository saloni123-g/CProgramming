//c program to calculate grade of students
#include<stdio.h>
int  main()
{
    int marks;
    printf("Enter your marks");
    scanf("%d",&marks);
   
   
    
    if(marks<40)
    {
        printf("Grade F");
    }
    else if(marks>=40 && marks<54)
    {
        printf("Grade D");
    }
    else if(marks>=55 && marks<69)
    {
        printf("Grade C");
    }
    else if(marks>=70 && marks<84)
    {
        printf("Grade B");
    }
    else 
    {
        printf("Grade A");
    }
    
    return 0;
}
