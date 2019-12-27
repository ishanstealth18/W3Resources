#include <stdio.h>
#include <stdlib.h>

/**
Description: This function prints next big number in an array
for a particular number in array.
Parameter: NA
Return: NA
*/
void problem43()
{
	/*Declare variables*/
	int arraySize43 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize43);
	int inputArray[arraySize43];
	printf("\nEnter array elements: ");
	/*Read input elements of an array*/
	for(int i = 0; i<arraySize43; i++)
	{
		printf("\nElement [%d]: ",i);
		scanf("%d",&inputArray[i]);
	}
	/*Created another array to store next big numbers*/
	int nextBigNumFlag43 = 0;
	int bigNumArray43[arraySize43];
	/*Logic to check if a number in array has another big number after it's position.If
	it has, store it inot final array*/
	for(int i = 0; i<arraySize43; i++)
	{
		nextBigNumFlag43 = 0;
		if(i == (arraySize43-1))
		{
			bigNumArray43[i] = -1;
			break;
		}
		for(int j = i+1; j<arraySize43; j++)
		{
			if(inputArray[j] > inputArray[i])
			{
				bigNumArray43[i] = inputArray[j];
				nextBigNumFlag43 = 1;
				break;
			}
		}
		if(nextBigNumFlag43 != 1)
		{
			bigNumArray43[i] = -1;
		}
	}
	/*Print final array*/
	printf("\nFinal array: \n");
	for(int i = 0; i<arraySize43; i++)
	{
		printf("%d ",bigNumArray43[i]);
	}
}

/**
Description: This function finds missing smallest positive number from
a particular array.
Parameter: NA
Return: NA
*/
void problem46()
{
	/*Declare variables*/
	int arraySize46 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize46);
	int inputArray46[arraySize46];
	printf("Enter array elements: ");
	/*Read elements of an array*/
	for(int i = 0; i<arraySize46; i++)
	{
		printf("Element [%d]: ",i);
		scanf("%d",&inputArray46[i]);
	}
	/*First sort the array*/
	int temp_1_46 = 0;
	for(int i = 0; i<arraySize46; i++)
	{
		for(int j = i+1; j<arraySize46; j++)
		{
			if(inputArray46[j] < inputArray46[i])
			{
				temp_1_46 = inputArray46[i];
				inputArray46[i] = inputArray46[j];
				inputArray46[j] = temp_1_46;
			}
		}
	}
	/*Display sorted array*/
	printf("\nSorted array: ");
	for(int i = 0; i<arraySize46; i++)
	{
		printf("\n%d",inputArray46[i]);
	}

	/*Logic to check smallest positive number*/
	int smallPositiveNum46 = 0;
	int numberMatcher46 = 1;
	for(int i = 0; i<arraySize46; i++)
	{
		if((inputArray46[i] > 0) && (inputArray46[i] == numberMatcher46))
		{
			numberMatcher46++;
		}
		else if((inputArray46[i] > 0) && (inputArray46[i] != numberMatcher46))
		{
			smallPositiveNum46 = numberMatcher46;
			break;
		}
	}
	/*Print data*/
	printf("\nSmallest positive number: %d",smallPositiveNum46);
}

/**
Description: This function shows how many triangles(just 3 sides) can be formed from
given array.
Parameter: NA
Return: NA
*/
void problem52()
{
	/*Declare variables*/
	int arraySize50 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize50);
	int inputArray50[arraySize50];
	printf("Enter array elements: ");
	/*Reading elements of an array*/
	for(int i = 0; i<arraySize50; i++)
	{
		printf("\nElement [%d]: ",i);
		scanf("%d",&inputArray50);
	}
	/*Logic to calculate 3 sides of triangle and form maximum combinations*/
	int count52 = 0;
	for(int i = 0; i<arraySize50; i++)
	{
		for(int j = i+1; j<arraySize50; j++)
		{
			for(int k = j+1; k<arraySize50; k++)
			{
				count52++;
			}
		}
	}
	printf("\nCount: %d",count52);
}

/**
Description: This function moves all the zeroes to the end of an array.
given array.
Parameter: NA
Return: NA
*/
void problem58()
{
	/*Declare variables*/
	int arraySize58 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize58);
	int inputArray58[arraySize58];
	printf("Enter elements of array: ");
	int zeroCount58 = 0;
	/*Read elements of an array and counting number of zeroes in the array*/
	for(int i = 0; i<arraySize58; i++)
	{
		printf("\nElement [%d]: ",i);
		scanf("%d",&inputArray58[i]);
		if(inputArray58[i] == 0)
		{
			zeroCount58++;
		}
	}
	/*Creating a different array with size of original array size minus zerocount*/
	int updatedArraySize = arraySize58-zeroCount58;
	int updatedArray58[updatedArraySize];
	int incrementer58 = 0;
	/*This logic will avoid all zeroes from original array and stores only number greater than 0*/
	for(int i = 0; i<arraySize58; i++)
	{

		if((inputArray58[i] != 0) || (i == arraySize58))
		{
			updatedArray58[incrementer58] = inputArray58[i];
			incrementer58++;
		}
	}
	/*This logic will store all the zeroes at the end of an array*/
	for(int i = updatedArraySize; i< (updatedArraySize+zeroCount58); i++)
	{
        updatedArray58[i] = 0;
	}
	/*Print the final array*/
	printf("\nUpdated array: ");
	for(int i = 0; i<(arraySize58); i++)
	{
		printf("%d ",updatedArray58[i]);
	}
}

int main()
{
	//problem43();
	//problem46();
	//problem52();
	problem58();
    return 0;
}
