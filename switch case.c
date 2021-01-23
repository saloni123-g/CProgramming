#include<stdio.h>
int main()

{
	printf("Enter your choice from the menu:  \n1. Pizza,Rs 239\n2. Burger,Rs 129\n3. Pasta,Rs 179\n4. FrenchFries,Rs 99\n5. Sandwich,Rs 149");
	
	int choice=0;
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1:
			printf("Food item-Pizza\nPrize-239");
			break;
		case 2:
			printf("Food item-Burger\nPrize-129");
			break;
		case 3:
			printf("Food item-Pasta\nPrize-179");
			break;	
		case 4:
			printf("Food item-French Fries\nPrize-99");
			break;	
		case 5:
			printf("Food item-Sandwich\nPrize-149");
			break;
		default:printf("Invalid choice");		
		
	}
}
