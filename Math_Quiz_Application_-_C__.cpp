//Andrew Hines
//Math Week 5
//1.23.2021


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

int Menu();
void Main_loop(int option);
void Addition(int num1, int num2);
void Subtraction(signed int num1, signed int num2);
void Multiplication(int num1, int num2);
void Division(int num1, int num2);
char difficultyLevel;
float ttlProblems,ttlCorrect;
main()
{
	int option;
	ttlProblems = 0;
	ttlCorrect = 0;
	srand(time(NULL));
	option = Menu();
	while (option != 5)
	{
		Main_loop(option);
		option = Menu();
	}
	printf("You attempted %.0f problems and got %.0f correct\n",ttlProblems,ttlCorrect);
	printf("For a percentage correct of %.2f percent\n", (ttlCorrect/ttlProblems)*100);
}
	
	int Menu()
	{
		int option;
		system("cls");
		puts("Math Practice Program");
		puts("1. Addition");
		puts("2. Subtraction");
		puts("3. Multiplication");
		puts("4. Division");
		puts("5. Quit");
		printf("Enter an option: ");
		scanf("%d", & option);
		return(option);
	}
	
	void Main_loop(int option)
	{
		char difficutyLevel;
		signed int num1, num2;	
		printf("Select difficulty level: e - easy m - medium h - hard\n");
		scanf(" %c", & difficultyLevel);
		difficultyLevel = toupper(difficultyLevel);	
		while (difficultyLevel != 'E' && difficultyLevel != 'M' && difficultyLevel != 'H')
		{
			printf("Please enter e, m, or h\n");
			scanf(" %c", & difficultyLevel);
			difficultyLevel = toupper(difficultyLevel);
		}
			printf("%c\n", difficultyLevel);
			if (difficultyLevel == 'E')
			{
				num1=rand()%10+1;
				num2=rand()%10+1;
			}
			if (difficultyLevel == 'M')
			{
				num1=rand()%100+1;
				num2=rand()%100+1;
			}
			if (difficultyLevel == 'H')
			{
				num1=rand()%1000+1;
				num2=rand()%1000+1;
			}
			switch(option)
			{
				case(1):Addition(num1,num2);break;
				case(2):Subtraction(num1,num2);break;
				case(3):Multiplication(num1,num2);break;
				case(4):Division(num1,num2);break;
			}
			ttlProblems += 1;
			system("pause");
			
			return;
	}
	

	
	void Addition(int num1,int num2)
	{
		int ans;
	int attempts;
	attempts = 0;
	while (attempts != 3 && ans != (num1 + num2))
	{
		printf("%d + %d = ?: ",num1,num2);
		scanf("%d", &ans);
		if(ans == num1 + num2)
		{
			puts("Correct");
			ttlCorrect +=1;
		}
		else
		{
			puts("Incorrect");
			attempts += 1;
			system("pause");
		}
	}
	return;
	}
	
	void Subtraction(signed int num1,signed int num2)
	{
		int ans;
		int attempts;
		while (attempts != 3 && ans != (num1 - num2))
		{
		printf("%d - %d = ?: ",num1,num2);
		scanf("%d", &ans);
		
	if(ans == num1 - num2)
	{	puts("Correct");
		ttlCorrect += 1;
	}
	else
	{
		puts("Incorrect");
		attempts += 1;
		system("pause");
	}
		}
	return;
	}
	
	void Multiplication(int num1, int num2)
	{
		int ans;
		int attempts;
		while (attempts != 3 && ans != (num1 * num2))
		{
		printf("%d * %d = ?: ",num1,num2);
		scanf("%d", &ans);
		
	if(ans == num1 * num2)
	{
		puts("Correct");
		ttlCorrect += 1;
	}
	else
	{
		puts("Incorrect");
		attempts += 1;
		system("pause");
	}
		}
	return;
	}
	
	void Division(int num1, int num2)
	{
		int num3, ans, attempts, rem;
		if (num1 < num2)
		{
		 num3 = num1;
		 num1 = num2;
		 num2 = num3;
		}	
		while (attempts != 3 && ans != (num1 / num2) && rem != (num1%num2))
		{
		printf("%d / %d = ?: ", num1, num2);
		scanf("%d", &ans);
		printf("Enter remainder: ");
		scanf("%d",& rem);
		
		if (ans == num1 / num2 && rem == num1%num2)
		{
			puts("Correct");
			ttlCorrect += 1;
		}
		else
		{
			puts("Incorrect");
			attempts +=1;
			system("pause");
		}
		}
		return;
	}
	
	
