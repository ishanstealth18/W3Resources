#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <inttypes.h>

/**
Description: This function prints number from 1 to 10.
Parameter: NA
Return: NA
**/
void problem1()
{
	/*For loop to print numbers from 1 to 10*/
	for(int i = 0; i< 10; i++)
	{
		printf("%d  ",i);
	}
}

/**
Description: This function prints sum of numbers from 1 to 10.
Parameter: NA
Return: NA
**/
void problem2()
{
	/*Logic to calculate sum of all 10 numbers*/
	int sum2 = 0;
	for(int i = 1; i<= 10; i++)
	{
		sum2 = sum2 + i;
	}
	printf("%d",sum2);
}

/**
Description: This function scans numbe from 1 to 10 and computes sum.
Parameter: NA
Return: NA
**/
void problme4()
{
	/*Declaring variables*/
	int inputNum4 = 0;
	int sum4 = 0;
	/*Logic to scan numbers from  1 to 10 and calculates sum*/
	for(int i = 1; i<=10; i++)
	{
		printf("\nEnter number %d: ",i);
		scanf("%d",&inputNum4);
		sum4 = sum4 + inputNum4;
	}
	/*Prints data*/
	printf("\nSum: %d",sum4);
}

/**
Description: This function prints table for the required input number in vertical manner.
Parameter: NA
Return: NA
**/
void problem7()
{
	/*Declaring variables*/
	int fromNum7 = 0;
	int toNum7 = 0;
	/*Reads input for mentioning range*/
	printf("\nEnter range: ");
	printf("\nEnter From number: ");
	scanf("%d",&fromNum7);
	printf("\nEnter To number: ");
	scanf("%d",&toNum7);
	/*Logic to print tables in vertical manner*/
	for(int i = 1; i<=toNum7; i++)
	{
		for(int j = 1; j<=10; j++)
		{
			printf("%d X %d = %d ",j,i,(j*i));
		}
		printf("\n");
	}

}

/**
Description: This function prints pyramid of stars.
Parameter: NA
Return: NA
**/
void problem9()
{
	/*Logic to print stars in pyramid shape*/
	for(int i = 1; i<=4; i++)
	{
		for(int j = 1; j<=i; j++)
		{
			printf("%c",'*');
		}
		printf("\n");
	}
}

/**
Description: This function prints pyramid of numbers repeating itself for each row.
Parameter: NA
Return: NA
**/
void problem11()
{
	/*Logic to print same numbers in pyramid*/
	for(int i = 1; i<=4 ; i++)
	{
		for(int j = 1; j<=i; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}

/**
Description: This function calculates factorial of any given number.
Parameter: NA
Return: NA
**/
void problem15()
{
	/*Declaring variables*/
	int inputNum15 = 0;
	printf("Enter input number: ");
	scanf("%d",&inputNum15);
	int total15 = 1;
	/*Logic to calculate factorial*/
	for(int i = inputNum15; i>0; i--)
	{
		total15 = total15 * inputNum15;
		inputNum15--;
	}
	printf("total: %d",total15);
}

/**
Description: This function prints floyds triangle
Parameter: NA
Return: NA
**/
void problem22()
{
	/*Logic to print Floyds triangle*/
	for(int i = 1; i<=5; i++)
	{
		if((i%2) != 0)
		{
			for(int j = 1; j<=i; j++)
			{
				if((j%2) != 0)
				{
					printf("%d ",1);
				}
				else
				{
					printf("%d ",0);
				}
			}
		}
		else
		{
			for(int k = 0; k<i; k++)
			{
				if((k%2) != 0)
				{
					printf("%d ",1);
				}
				else
				{
					printf("%d ",0);
				}
			}
		}
		printf("\n");
	}
}

/**
Description: This function prints sum of a series with only odd powers to 2.
Parameter: NA
Return: NA
**/
void problem24()
{
	/*Declare variables*/
	int inputNum24 = 0;
	int numOfTerms = 0;
	/*Read input*/
	printf("Enter input number: ");
	scanf("%d",&inputNum24);
	printf("Enter number of terms: ");
	scanf("%d",&numOfTerms);
	double sum24 = 0;
	int power = 1;
	/*Logic to compute total sum*/
	for(int i = 1 ; i<=numOfTerms; i++)
	{
		if((i%2) != 0)
		{
			sum24 = sum24+ (double) pow(2,power);
		}
		else
		{
			sum24 = sum24- (double) pow(2,power);
		}
		power+=2;

	}
	printf("Sum: %.2f",sum24);

}

/**
Description: This function calculates sum of all perfect numbers till input number.
Parameter: NA
Return: NA
**/
void problem27()
{
	/*Declare variables*/
	int inputNum27 = 0;
	printf("Enter perfect number: ");
	scanf("%d",&inputNum27);
	int sum27 = 0;
	/*Logic to compute sum of all perfect divisors*/
	for(int i = 1; i<inputNum27; i++)
	{
		if((inputNum27%i) == 0)
		{
			printf("\nDivisor: %d ",i);
			sum27 = sum27 + i;
		}
	}
	/*Prints data*/
	printf("\nSum: %d",sum27);

}

/**
Description: This function detects if number is armstrong number.
Parameter: NA
Return: NA
**/
void problem29()
{
	/*Declare variables*/
	int inputNum29 = 0;
	/*Read variables*/
	printf("Enter input number: ");
	scanf("%d",&inputNum29);
	int tempNum29 = inputNum29;
	int sum29 = 0;
	/*Logic to calculate armstrong number*/
	for(int i = 0; i<sizeof(tempNum29);i++)
	{
		int remainder29 = (tempNum29%10);
		sum29 = sum29 + (remainder29*remainder29*remainder29);
		tempNum29 = (tempNum29/10);
	}
	printf("\nSum: %d",sum29);
	/*Logic to determine if number is armstrong number*/
	if(sum29 == inputNum29)
	{
		printf("\n%d is armstrong number.",inputNum29);
	}
	else
	{
		printf("\n%d is not armstrong number.",inputNum29);
	}
}

/**
Description: This function converts decima to binary.
Parameter: NA
Return: NA
**/
void problem41()
{
	/*Declare variables*/
	int inputNum41 = 0;
	printf("Enter decimal number: ");
	scanf("%d",&inputNum41);
	printf("\nThe binary of decimal %d is ",inputNum41);
	/*Logic to convert decimal to binary*/
	for(int i = inputNum41 ; i>0; i--)
	{
		printf("%d",(inputNum41%2));
		inputNum41 = (inputNum41/2);
	}
}

/**
Description: This function converts binary to decimal upto 4 bits only.
Parameter: NA
Return: NA
**/
void problem42()
{
	/*Declare variables*/
	int inputNum42 = 0;
	printf("Enter binary input: ");
	scanf("%d",&inputNum42);
	printf("\nSize : %d",sizeof(inputNum42));
	int remainder42 = 0;
	int decimal42 = 0;
	/*Logic to convert binary to decimal*/
	for(int i = 0; i<sizeof(inputNum42);i++)
	{
		remainder42 = (inputNum42%10);
		printf("\nRemainder: %d",remainder42);
		if(remainder42 == 1)
		{
			decimal42 = decimal42 + pow(2,i);
			printf("\nDecimal: %d",decimal42);
		}
		inputNum42 = inputNum42/10;
	}
	/*Print data*/
	printf("Decimal : %d",decimal42);
}

/**
Description: This function calculates highest common factor.
Parameter: NA
Return: NA
**/
void problem43()
{
	/*Declare variables*/
	int input1_43 = 0;
	int input2_43 = 0;
	/*Reading variables*/
	printf("Enter 1st number: ");
	scanf("%d",&input1_43);
	printf("Enter 2nd number: ");
	scanf("%d",&input2_43);
	int temp43 = 0;
	/*Logic to calculate Highest Common Factor*/
	if(input1_43 < input2_43)
	{
		for(int i = 1; i<=input1_43; i++)
		{
			if((input1_43%i) == 0 && (input2_43%i) == 0)
			{
				printf("\nCommon Divisors: %d",i);
				if(i>temp43)
				{
					temp43 = i;
				}
			}
		}
	}
	/*Print data*/
	printf("\nMax number is %d",temp43);
}

void problem44()
{
	/*Declare variables*/
	int input1_44 = 0;
	int input2_44 = 0;
	/*Reading variables*/
	printf("Enter 1st number: ");
	scanf("%d",&input1_44);
	printf("Enter 2nd number: ");
	scanf("%d",&input2_44);
	int lcm = 0;

	for(int i =1 ;i<=input1_44; i++)
	{
		int multiplier1 = (input1_44*i);
		printf("\nMulti1: %d",multiplier1);

		if(multiplier1 == input2_44)
		{
			printf("\nMultipliers: %d",i);
			lcm = multiplier1;
			break;
		}
		else
		{
			input2_44 = input2_44*i;
		}
	}
	printf("\nLCM : %d",lcm);

}

/**
Description: This function determines if a number is strong number.
Parameter: NA
Return: NA
**/
void problem47()
{
	/*Declare variables*/
	int inputNum47 = 0;
	printf("Enter input nuber: ");
	scanf("%d",&inputNum47);
	int tempNum47 = inputNum47;
	int remainder47 = 0;
	int sum47 = 0;
	int factorial47 = 1;
	/*Logic to calculate strong number*/
	while(inputNum47 >0)
	{
		remainder47 = inputNum47%10;
		for(int j = remainder47; j>0; j--)
		{
			factorial47 = factorial47*j;
		}
		sum47 = sum47+factorial47;
		factorial47 = 1;
		inputNum47 = inputNum47/10;
	}
	/*Logic to decide if number is strong number*/
	if(sum47 == tempNum47)
	{
		printf("\n%d is strong number",tempNum47);
	}
	else
	{
		printf("\n%d is not a strong number",tempNum47);
	}
}


int main()
{
	//problem1();
	//problem2();
	//problme4();
	//problem7();
	//problem9();
	//problem11();
	//problem15();
	//problem22();
	//problem24();
	//problem27();
	//problem29();
	//problem41();
	//problem42();
	//problem43();
	//problem44();
	problem47();
    return 0;
}
