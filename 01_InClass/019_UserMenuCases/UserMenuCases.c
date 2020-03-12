#include <stdio.h>
#include <stdlib.h>

typedef enum{
	INVALID = 0,
	PRINTERCODENAME = 1,
	CALCULATIONONEPLUSONE,
	EXIT,
} MenuSelection;

MenuSelection printUserMenu( void );

int main( int argc, char* argv[] )
{
	int runMenuPrompt = 1;
	MenuSelection menuSelection = INVALID;

	while(runMenuPrompt)
		{

		menuSelection = printUserMenu();

		switch(menuSelection)
			{

				case PRINTERCODENAME:
					printf("theJ \n");
					break;

				case CALCULATIONONEPLUSONE:
					printf("1 + 1 = 2.5 (Pius Portmann)\n");
					break;

				case EXIT:
					printf("Exiting. Goodbye my friend.\n");
					runMenuPrompt = 0;	
					break;

				default:
					printf("FATAL ERROR: I_DI-OT\n");
					runMenuPrompt = 0;	
					break;
			}
		}
	return EXIT_SUCCESS;
}

/*	prints the user menu and returns the selected item
 * 	Inputs: None.
 * 	Outputs: int selectedMenuItem
 *  Error behavior: returns zero for all invalid menu item selections
 */	
MenuSelection printUserMenu( void ) {
	int selectedMenuItem = 0;
	printf("\n------------------------------------\n");
	printf("* * * * Welcome to EPIC CODE! * * * *\n");
	printf("------------------------------------\n");
	printf("Select from the following options:\n");
	printf("1: Print coder name\n");
	printf("2: Calculate 1+1\n");
	printf("3: exit\n");
	printf("-> ");
	scanf("%d", &selectedMenuItem );

	if(		selectedMenuItem !=	PRINTERCODENAME
		&&	selectedMenuItem !=	CALCULATIONONEPLUSONE
		&&	selectedMenuItem !=	EXIT )
		{
			selectedMenuItem = INVALID;
		}
	return selectedMenuItem;
}	








