/* This is a program that displays the Basketball Score of One Quarter of the match
   In this program, the sleep() function is also used for aesthetics
   This program is developed by: Newcomer03.
   Special thanks to Chirag Ghosh */


#include <stdio.h>
void instructions()
{	//This function displays the general instructions
	printf("::BASKETBALL SCORE DISPLAY::\n\n");
	sleep(2);						//delay the output for 2 seconds
	printf("Basic Instructions about the execution.\n");
	printf("* This is a program that displays the Basketball Score of One Quarter of the match\n");
	printf("* Please make sure you follow the instructions given during the runtime\n");
	printf("* Please do not enter non-compatible values during runtime, they may result in errors\n");
	
	printf("\nThis program has been solely developed by: \n");
	printf("\tNewcomer03");
	printf("\nSpecial thanks to:");
	printf("\n\tChirag Ghosh\n");
}
void quickScoreDisplay(int a, int b)
{	//This function displays score after each entry or each basket
	printf("\t___________SCORE___________\n");
	printf("\t|Team 1: %d|\t|Team 2: %d|\n",a,b);
	printf("\t___________________________\n");
}
void main()
{	//This is the main function block
	instructions();					//This will display some necessary information about the program
	
	int scrT1 = 0, scrT2 = 0;		//These will store the total points of Teams 1 & 2.
	int t1 = 0, t2 = 0;				//These are temporary variables that will store points scored by team at each basket.
	char choice = ' ';				//This will store the choice of the user.
	
	
	printf("\n\nStarting the program...\n");
	sleep(3);						//delay the output for 1 seconds
	printf("You can enter 'A' to enter score for Team 1.\n");
	printf("You can enter 'B' to enter score for Team 2.\n");
	printf("You can enter 'X' to stop accepting scores.");
	sleep(2);						//delay the output for 2 seconds
	
	while(1)
	{
		sleep(1);					//delay the output for 1 second
		printf("\n\nEnter your choice: ");
		scanf(" %c",&choice);
		
		if(choice=='A' || choice=='a')
		{
			printf("Enter points scored (1-3) by Team 1: ");
			scanf("%d",&t1);
			while(1)
			{
				if(t1>3 || t1<1)
				{
					printf("ERROR: Points can only range from 1-3");
					printf("\n\nEnter points scored (1-3) by Team 1: ");
					scanf("%d",&t1);
				}
				else
				{
					scrT1 = scrT1 + t1;
					quickScoreDisplay(scrT1, scrT2);
					break;
				}
			}
		}
		
		if(choice=='B' || choice=='b')
		{
			printf("Enter points scored (1-3) by Team 2: ");
			scanf("%d",&t2);
			while(1)
			{
				if(t2>3 || t2<1)
				{
					printf("ERROR: Points can only range from 1-3");
					printf("\n\nEnter points scored (1-3) by Team 2: ");
					scanf("%d",&t2);
				}
				else
				{
					scrT2 = scrT2 + t2;
					quickScoreDisplay(scrT1, scrT2);
					break;
				}
			}
			
		}
		
		if(choice=='X' || choice=='x')
		{
			break;
		}
		
		if(choice!='A' && choice!='a' && choice!='B' && choice!='b' && choice!='X' && choice!='x')
		{
			printf("The Only choices available are: 'A' 'B' and 'X'");
		}
		
	}
	
	sleep(1);						//delay the output for 1 second
	printf("\nDetermining the winner");
	sleep(1);						//delay the output for 1 second
	printf(".");
	sleep(1);						//delay the output for 1 second
	printf(".");
	sleep(1);						//delay the output for 1 second
	printf(".\n");
	sleep(2);						//delay the output for 2 seconds
	
	if(scrT1>scrT2)					//Runs this block if score of Team 1 is higher than Team 2
	{
		printf("\n\t::Winner is: Team 1::");
	}
	
	else if(scrT2>scrT1)			//Runs this block if score of Team 2 is higher than Team 1
	{
		printf("\n\t::Winner is: Team 2::");
	}
	
	else							//Runs this block if scores of both teams is are equal
	{
		printf("\n\t:::TIE:::");
	}
	
	printf("\n\nPress Any Key To Exit...");
    getch();
}
