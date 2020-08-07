#include<stdio.h>
main()
{
	int choice;
	printf("Pick a snack: \n1. Burger\n  Rs129\n2. Sandwich\n  Rs149\n3. Pizza\n  Rs239\n4. French Fries\n  Rs99\n5. Pasta\n  Rs179 \n ");
	scanf("%d", &choice);
	switch(choice)
{
	case 1:
		printf("Snack: Burger \n Price: Rs129 \n Enjoy the Snack!");
		break;
	case 2:
		printf("Snack: Sandwich \n Price: Rs149 \n Enjoy the Snack!");
		break;
    case 3:
    	printf("Snack: Pizza \n Price: Rs239 \n Enjoy the Snack!");
		break;
    case 4:
    	printf("Snack: French Fries \n Price: Rs99 \n Enjoy the Snack!");
		break;
	case 5:
		printf("Snack: Pasta \n Price: Rs179 \n Enjoy the Snack!");
		break;
	default:
	    printf(" So please pick a snack.");	
}
}
