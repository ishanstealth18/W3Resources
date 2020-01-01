#include <stdio.h>
#include <stdlib.h>

/**
Description: This method swaps number without using third variable.
Parameter: NA
Return: NA
**/
void swapNum()
{
	/*Declaring variables*/
	int x = 0;
	int y = 0;
	printf("Enter x: %d");
	scanf("%d",&x);
	printf("Enter y: %d");
	scanf("%d",&y);
	/*Logic to swap numbers without 3rd variable*/
	x = x+y;
	y = x-y;
	x = x-y;
	/*Print data*/
	printf("\nx: %d y: %d",x,y);
}

/**
Description: This method shifts bits to left and calculates value.
Parameter: NA
Return: NA
**/
void leftShift2Bits()
{
	/*Declare variables*/
	int inputNum56 = 0;
	int originalNum = 0;
	printf("Enter original number: ");
	scanf("%d",&originalNum);
	printf("Enter number: ");
	scanf("%d",&inputNum56);
	/*Print data and calculate shift*/
	printf("\nShifted data: %d",originalNum<<inputNum56);
}

/**
Description: This method calculates sum of the digits of number less than 500.
Parameter: NA
Return: NA
**/
void problem62()
{
	/*Declare variables*/
    int inputNum62 = 0;
    printf("Enter positive number less than 500: ");
    scanf("%d",&inputNum62);
	int sum62 = 0;
	/*Logic to calculate sum of digits*/
    while(inputNum62 > 0)
    {
		sum62 = sum62 + (inputNum62%10);
		inputNum62 = (inputNum62/10);
    }
	/*Print data and calculate shift*/
    printf("sum: %d",sum62);
}


/**
Description: This method calculates sum of the numbers till input number is reached. Everytime
each number to be added will be multiplied 4 times.
Parameter: NA
Return: NA
**/
void problem63()
{
	/*Declare variables*/
	int inputNum63 = 0;
	printf("Enter number less than 100: ");
	scanf("%d",&inputNum63);
	int sum63 = 0;
	int incrementer63 = 0;
	/*Logic to calculate sum of digits*/
	for(int i = 1; i<=inputNum63;i=i+incrementer63)
	{

		sum63 = sum63 + (i*i*i*i);
		incrementer63++;
		//i = i + incrementer63;
	}
	/*Print data*/
	printf("Sum: %d",sum63);
}

/**
Description: This method calculates maximum, minimum and average of the input numbers.
Parameter: NA
Return: NA
**/
void problem64()
{
	/*Declare variables*/
	int arr64[10];
	int inputNum64 = 0;
	int loopBreakFlag = 0;
	printf("Enter number: ");
	int count64 = 0;
	int maxNum = 0;
	int incrementer64 = 0;
	int sum64 = 0;
	double average64;
	/*Logic to allocate numbers to array by using scanf() function*/
	while(loopBreakFlag == 0)
	{
		scanf("%d",&arr64[incrementer64]);
		if(arr64[incrementer64] <= 0)
		{
			loopBreakFlag = 1;
		}
		count64++;
		incrementer64++;
	}
	printf("Count: %d",count64-1);
	/*Logic to calculate maximum number*/
	for(int j = 0; j<count64-1; j++)
	{
		//printf("arr[%d]: %d",j,arr64[j]);
		if(arr64[j]>maxNum)
		{
			maxNum = arr64[j];
		}
		sum64 = sum64 + arr64[j];
	}
	/*Print data and calculate average also*/
	printf("\nSum = %d",sum64);
	average64 = (sum64/(count64-1));
	printf("\nAvergae: %f",average64);
	printf("\nMax number: %d",maxNum);
	/*Logic to calculate minimum number*/
	for(int k = 0; k<count64-1; k++)
	{
		if(arr64[k] < maxNum)
		{
			maxNum = arr64[k];
		}
	}
	printf("\nMinimum number: %d",maxNum);
}

/**
Description: This method calculates prime numbers between 1 and 199.
The output should be like 10 prime numbers in each row.
Parameter: NA
Return: NA
**/
void problem65()
{
	/*Declare variables*/
	printf("The prime numbers between 1 and 199 are: \n");
	int inputNum65 = 2;
	int count65 = 0;
	int primeNumCount = 0;

	/*Logic to calculate prime numbers*/
	while(inputNum65 < 199)
	{
		for(int i = 1; i<=inputNum65; i++)
		{
			if((inputNum65%i) == 0)
			{
				count65++;
			}
		}
		/*Logic to check if count for prime number is exact 2. One
		by dividing with 1 and other with number itself*/
		if(count65 == 2)
		{
			printf("%d ",inputNum65);
			primeNumCount++;
		}
		/*Logic to keep check maximum numbers per row is 10*/
		if(primeNumCount > 9)
		{
			primeNumCount = 0;
			printf("\n");
		}
		inputNum65++;
		count65 = 0;
	}
}

/**
Description: This method prints alphabets and corresponding values in
decimal.
Parameter: NA
Return: NA
**/
void problem70()
{
	/*Logic to print alphabets and decimals*/
	for(char i = 'a'; i<='z'; i++)
	{
		printf("[%c %d] ",i,i);
	}
	printf("\n");

	for(char j = 'A'; j<='Z'; j++)
	{
		printf("[%c %d] ",j,j);
	}
}

/**
Description: This method calculates total characters in string.
Parameter: NA
Return: NA
**/
void problem71()
{
	/*Declare variables*/
	char inputStr71[] = "w3resource";
    int count71 = 0;
    /*Logic to count characters*/
    while(inputStr71[count71] != '\0')
    {
		count71++;
    }
    printf("Count: %d",count71);

}

/**
Description: This method decides if a number is multiple.
Parameter: NA
Return: NA
**/
void problem73()
{
	/*Declare variables*/
	int inputnum73 = 0;
	int inputNum73_2 = 0;

	printf("Enter 2 integers: ");
	scanf("%d",&inputnum73);
	scanf("%d",&inputNum73_2);
	/*Logic to check if number is multuiple*/
	if((inputnum73%inputNum73_2) == 0)
	{
		printf("%d is multiple of %d",inputnum73,inputNum73_2);
	}
	else
	{
		printf("%d is not multiple of %d",inputnum73,inputNum73_2);
	}
}

/**
Description: This method takes 7 digit number as input and print each digit seperately.
Parameter: NA
Return: NA
**/
void problem75()
{
	/*Declare variables*/
	int inputNum75 = 0;
	printf("Enter 7 digit number: \n");
	scanf("%d",&inputNum75);
	int remainder75 = 0;
	int incrementer = 0;
	int arr75[7];
	/*Logic to display 7 digit number seperately with 2 decimal spaces*/
	while(inputNum75 > 0)
	{
		arr75[incrementer] = (inputNum75%10);
		inputNum75 = inputNum75/10;
		incrementer++;
	}
	/*Print data*/
	for(int i = 6; i>=0; i--)
	{
		printf("%d  ",arr75[i]);
	}
}

/**
Description: This method prints values in tabular form with specific addition
Parameter: NA
Return: NA
**/
void problem79()
{
	/*Declare variables*/
	int row = 1;
	int column = 0;
	printf("x\tx+2\tx+4\tx+6\t ");
	printf("\n--------------------------------\n");
	/*Calculate values */
	for(int i = 0; i<5 ; i++)
	{
		for(int j = 0; j<4; j++)
		{

			printf("%d\t",row);
			row = row+2;
		}
		printf("\n");
		row = row-5;
	}
}

/**
Description: This method prints char # with respect to number of input.
Parameter: NA
Return: NA
**/
void problem80()
{
	/*Declare variable*/
	int inputNum80 = 0;
	printf("Enter input: ");
	scanf("%d",&inputNum80);
	/*Print # square*/
	for(int i = 0; i<inputNum80;i++)
	{
		for(int j = 0; j<inputNum80; j++)
		{
			printf("%c ",'#');
		}
		printf("\n");
	}
}

/**
Description: This method checks if string is palindrome.
Parameter: NA
Return: NA
**/
void problem82()
{
	/*Declaring variables*/
	int input82;
	printf("Enter string : ");
	scanf("%d",&input82);
	int flag = 0;
	int incrementer82 = 0;
	int remainder82 = 0;
	int arr82[5];
	int count82 = 4;
	/*Logic to seperate out each digit and store in array*/
	while(input82 > 0 )
	{
		arr82[incrementer82] = (input82%10);
		incrementer82++;
		input82 = input82/10;
	}
	/*Logic to check if string is palindrome*/
	for(int j = 0; j<5; j++)
	{
		//printf("\narr[%d]: %d  arrcount[%d]: %d",j,arr82[j],count82,arr82[count82]);
		if(arr82[j] != arr82[count82])
		{
			flag = 1;
		}
		count82--;
	}
	/*Print data*/
	if(flag == 1)
	{
		printf("\nString is not palindrome");
	}
	else
	{
		printf("\nString is palindrome");
	}
}

/**
Description: This method checks number of 3's in a particular number less than 7.
Parameter: NA
Return: NA
**/
void problem83()
{
	/*Declaring variables*/
	int inputNum83 = 0;
	printf("Enter a number less than 7 digits: ");
	scanf("%d",&inputNum83);
	int arr83[7];
	int incrementer83 = 0;
	int count83 = 0;
	/*Logic to seperate out each digit and store in array. Also to count number of 3's in number.*/
	while(inputNum83 > 0 )
	{
		arr83[incrementer83] = (inputNum83%10);
		if(arr83[incrementer83] == 3)
		{
			count83++;
		}
		incrementer83++;
		inputNum83 = inputNum83/10;
	}
	/*Print the data*/
	printf("There are %d numbers of 3 in number.",count83);

}


int main()
{
    //swapNum();
    //leftShift2Bits();
	//problem62();
	//problem63();
	//problem64();
	//problem65();
	//problem70();
	//problem71();
	//problem73();
	//problem75();
	//problem79();
	//problem80();
	//problem82();
	problem83();

    return 0;
}
