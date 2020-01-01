#include <stdio.h>
#include <stdlib.h>

/**
Description: This function prints numbers in reverse order from array
Parameter: NA
Return: NA
**/
void problem1()
{
	/*Declare variables*/
	int inputArrNum1 = 0;
	/*Read variables*/
	printf("Enter size of arra: ");
	scanf("%d",&inputArrNum1);
	int inputArray1[inputArrNum1];
	/*Input elements in array by reading*/
	printf("\nEnter elements in array: ");
	for(int i = 0; i<inputArrNum1;i++)
	{
		printf("\nElement %d: ",i);
		scanf("%d",&inputArray1[i]);
	}
	/*Print elements in original format*/
	printf("\nNumbers in original array: ");
	for(int j = 0; j<inputArrNum1; j++)
	{
		printf("%d ",inputArray1[j]);
	}
	/*Print elements in reverse format*/
	printf("\nNumbers in reverse order: ");
	for(int k = inputArrNum1-1; k>=0; k--)
	{
		printf("%d ",inputArray1[k]);
	}
}

void problem5()
{
	/*Declare variables*/
	int inputArrNum5 = 0;
	/*Read variables*/
	printf("Enter size of arra: ");
	scanf("%d",&inputArrNum5);
	int inputArray5[inputArrNum5];
	int count5 = 0;
	int temp5 = 0;
	int element5 = 0;
	/*Input elements in array by reading*/
	printf("\nEnter elements in array: ");
	for(int i = 0; i<inputArrNum5;i++)
	{
		printf("\nElement %d: ",i);
		scanf("%d",&inputArray5[i]);
	}
	/*Logic to find duplicate elements in array*/
	for(int j = 0; j<inputArrNum5-1; j++)
	{
		for(int k = j+1; k<inputArrNum5; k++)
		{
			if(inputArray5[j] == inputArray5[k])
			{
				count5++;
			}
		}
		if(count5 > temp5)
		{
			element5 = j;
			temp5 = count5;
		}
		count5 = 0;
	}
	/*Print duplicate values*/
	printf("Element %d is duplicate and maximum times",inputArray5[element5]);
}

/**
Description: This function prints a sorted array in descending order. It has 2 arrays of same length
and it adds up to final array which is combination of 2 arrays.
Parameter: NA
Return: NA
**/
void problem7()
{
	/*Declaring variables for 1st array*/
    int inputArrSize7 = 0;
    printf("Enter Array 1 size: ");
    scanf("%d",&inputArrSize7);
    int inputArray1_7[inputArrSize7];
    printf("\nEnter 1st array elements: ");
    /*Read first array as input*/
    for(int i = 0; i<inputArrSize7; i++)
    {
		printf("\nElement %d: ",i);
		scanf("%d",&inputArray1_7[i]);
    }
	/*Declaring variables for 2nd array*/
    int inputArrSize7_2 = 0;
    printf("Enter Array 2 size: ");
    scanf("%d",&inputArrSize7_2);
    int inputArray2_7[inputArrSize7_2];
    printf("\nEnter 2nd array elements: ");
    /*Read 2nd array as input*/
    for(int j = 0; j<inputArrSize7_2; j++)
    {
		printf("\nElement %d: ",j);
		scanf("%d",&inputArray2_7[j]);
    }
	/*Creating final array which is combination of 1st 2 arrays*/
	int temp7 = 0;
	int incrementer7 = 0;
	printf("\nFinal array size: %d",inputArrSize7+inputArrSize7_2);
	int inputArr7_3[inputArrSize7+inputArrSize7_2];
	/*Combining 2 arrays into final array*/
    for(int k = 0; k<inputArrSize7; k++)
    {
		inputArr7_3[k] = inputArray1_7[k];
    }
    for(int l = inputArrSize7_2; l<(inputArrSize7_2+inputArrSize7); l++)
    {
		inputArr7_3[l] = inputArray2_7[incrementer7];
		incrementer7++;
    }
	/*Sorting final array in descending order*/
    for(int m = 0; m<(inputArrSize7_2+inputArrSize7)-1; m++)
    {
		for(int n = m+1; n<(inputArrSize7_2+inputArrSize7); n++)
		{
			if(inputArr7_3[n] < inputArr7_3[m])
			{
				temp7 = inputArr7_3[m];
				inputArr7_3[m] = inputArr7_3[n];
				inputArr7_3[n] = temp7;
			}
		}
    }
	/*Print final array after sorting*/
	printf("\nFinal array elements: ");
	for(int o = 0;o< (inputArrSize7+inputArrSize7_2); o++)
	{
		printf("\n%d",inputArr7_3[o]);
	}
}

/**
Description: This function first seperates even and odd numbers and then stores in
2 different arrays. One for even numbers and other for odd numbers.
Parameter: NA
Return: NA
**/
void problem10()
{
	/*Declare variables*/
	int inputNum10 = 0;
	printf("Enter array size: ");
	scanf("%d",&inputNum10);
	int inputArr10[inputNum10];
	int countOdd10 = 0;
	int countEven10 = 0;
	/*Scan input elements of array and count number of even and odd numbers*/
	printf("\nEnter array elements: ");
	for(int i = 0; i<inputNum10; i++)
	{
		printf("\nElement %d: ",i);
		scanf("%d",&inputArr10[i]);
		if((inputArr10[i] % 2) == 0)
		{
			countEven10++;
		}
		else
		{
			countOdd10++;
		}
	}
	/*Print total count of odd and even numbers*/
	printf("Odd count : %d",countOdd10);
	printf("Even count : %d",countEven10);

	/*Creating 2 arrays, 1 for odd elements and other for even*/
	int arr10_2[countOdd10];
	int arr10_3[countEven10];
	int evenIncrementer10 = 0;
	int oddIncrementer10 = 0;
	/*Storing odd and even elements in 2 seperate arrays*/
    for(int j = 0; j<inputNum10; j++)
    {
		if((inputArr10[j] % 2) == 0)
		{
			arr10_3[evenIncrementer10] = inputArr10[j];
			evenIncrementer10++;
		}
		else
		{
			arr10_2[oddIncrementer10] = inputArr10[j];
			oddIncrementer10++;
		}
    }
	/*Print array with odd elements*/
	printf("\nOdd array: ");
    for(int k = 0; k<countOdd10; k++)
    {
		printf("\nElement %d: %d",k,arr10_2[k]);
    }
	/*Print array with even elements*/
    printf("\nEven array: ");
    for(int l = 0; l<countEven10; l++)
    {
		printf("\nElement %d: %d",l,arr10_3[l]);
    }

}

/**
Description: This function inserts an additional element in sorted array.
Parameter: NA
Return: NA
**/
void problem13()
{
	/*Declare variables*/
	int inputArrSize13 = 0;
	printf("Enter array size: ");
	scanf("%d",&inputArrSize13);
	printf("\nEnter elements in ascending order: ");
	int inputArr13[inputArrSize13];
	/*Reading elements for the array from input*/
	for(int i = 0; i<inputArrSize13; i++)
	{
		printf("\nElement %d: ",i);
		scanf("%d",&inputArr13[i]);
	}
	/*Declaring variables for inserting additional element*/
	int insertValue13 = 0;
	int updatedArr13[inputArrSize13+1];
	printf("Enter value to be inserted: ");
	scanf("%d",&insertValue13);
	int temp13 = 0;
    int position13 = 0;
	/*Logic to check at which position replacement is needed as array is sorted. Logic to check if
	inserted element is smaller than existing elements in array*/
    for(int j = 0; j<inputArrSize13; j++)
    {
		if(insertValue13 < inputArr13[j])
		{
			position13 = j;
			break;
		}
    }
    printf("\nPosition to change: %d",position13);
	/*Logic to replace the inserted element on position calculated earlier*/
    for(int k = 0; k<=position13; k++)
    {
		if(k == position13)
		{
			updatedArr13[k] = insertValue13;
		}
		else
		{
			updatedArr13[k] = inputArr13[k];
		}
    }
	/*Copying rest of the elements as it is from original array*/
    for(int l = position13+1; l< (inputArrSize13+1); l++)
    {
		updatedArr13[l] = inputArr13[position13];
		position13++;
    }
    /*Print final array*/
    printf("\nFinal Array: ");
    for(int m = 0; m< (inputArrSize13+1); m++)
    {
		printf("\nElement %d: %d",m,updatedArr13[m]);
    }
}

/**
Description: This function deletes an element from sorted array.
Parameter: NA
Return: NA
**/
void problem15()
{
	/*Declare variables*/
	int arraySize15 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize15);
	int inputArr15[arraySize15];
	/*Read elements of array in ascending order*/
	printf("Insert %d elements in ascending order: ",arraySize15);
	for(int i = 0; i<arraySize15; i++)
	{
		printf("\nElement %d: ",i);
		scanf("%d",&inputArr15[i]);
	}
	/*Read position to be deleted*/
	int insertPosition15 = 0;
	printf("\nEnter a position to be deleted: ");
	scanf("%d",&insertPosition15);
	int updatedArr[arraySize15-1];
	/*Copy elements from original array to updated till position to be deleted*/
	for(int j = 0; j<insertPosition15;j++)
	{
		updatedArr[j] = inputArr15[j];
	}
	/*Copy remaining elements from original array to updated one*/
	for(int k = insertPosition15; k<(arraySize15-1);k++)
	{
		updatedArr[k] = inputArr15[k+1];
	}
	/*Print final array*/
	printf("\nFinal array: ");
	for(int l = 0; l<(arraySize15-1);l++)
	{
		printf("\nElement %d: %d",l,updatedArr[l]);
	}
}

/**
Description: This function finds second smallest number from array.
Parameter: NA
Return: NA
**/
void problem16()
{
	/*Declare variables*/
	int arraySize16 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize16);
	int inputArr16[arraySize16];
	printf("Enter %d elements of array: ",arraySize16);
	/*Read elements of array*/
	for(int i = 0; i<arraySize16; i++)
	{
		printf("\nElement %d: ",i);
		scanf("%d",&inputArr16[i]);
	}
	int temp16 = 0;
	/*Logic to find the second smallest number from array*/
	for(int j=0; j<arraySize16-1; j++)
	{
		for(int k = j+1; k<arraySize16; k++)
		{
			if(inputArr16[k] > inputArr16[j])
			{
				temp16 = inputArr16[j];
				inputArr16[j] = inputArr16[k];
				inputArr16[k] = temp16;
			}
		}
	}
	/*Print data*/
	printf("\nSecond smallest number : %d",inputArr16[1]);
}

/**
Description: This function prints 2D array.
Parameter: NA
Return: NA
**/
void problem18()
{
	/*Declare vriables*/
	int inputArr18[3][3];
	printf("Enter elements for array: ");
	/*Read elements for 2D array*/
	for(int i =0; i<3;i++)
	{
		for(int j = 0; j<3; j++)
		{
            printf("\nElement[%d][%d]: ",i,j);
            scanf("%d",&inputArr18[i][j]);
		}
	}
	/*Print 2D array*/
	printf("\nThe matrix is: \n");
	for(int i =0; i<3;i++)
	{
		for(int j = 0; j<3; j++)
		{
            printf("%d ",inputArr18[i][j]);
		}
		printf("\n");
	}

}

/**
Description: This function adds 2 matrix.
Parameter: NA
Return: NA
**/
void problem19()
{
	/*Declare variables*/
	int arraySize19 = 0;
	printf("Input soze of square matrix: ");
	scanf("%d",&arraySize19);
	int Array1_19[arraySize19][arraySize19];
	int Array2_19[arraySize19][arraySize19];
	/*Logic to read elements for 1st array*/
	printf("Input elements for 1st matrix: ");
	for(int i = 0; i<arraySize19; i++)
	{
		for(int j = 0; j<arraySize19; j++)
		{
			printf("\nElement [%d][%d]: ",i,j);
			scanf("%d",&Array1_19[i][j]);
		}
	}
	/*Logic to read elements for 2nd array*/
	printf("Input elements for 2nd matrix: ");
	for(int i = 0; i<arraySize19; i++)
	{
		for(int j = 0; j<arraySize19; j++)
		{
			printf("\nElement [%d][%d]: ",i,j);
			scanf("%d",&Array2_19[i][j]);
		}
	}
	/*Logic to add 2 arrays*/
	printf("\nFinal matrix after adding 2 matrix: \n");
	int addArray19[arraySize19][arraySize19];
	for(int i = 0; i<arraySize19; i++)
	{
		for(int j = 0; j<arraySize19; j++)
		{
			addArray19[i][j] = Array1_19[i][j] + Array2_19[i][j];
			printf("%d ",addArray19[i][j]);
		}
		printf("\n");
	}
}

/**
Description: This function does transpose of given matrix.
Parameter: NA
Return: NA
**/
void problem22()
{
	/*Declare variables*/
    int arraySize22 = 0;
    printf("Enter array size: ");
    scanf("%d",&arraySize22);
    int inputArray22[arraySize22][arraySize22];
    /*Enter elements of matrix*/
    printf("Enter elements of matrix: ");
    for(int i = 0; i<arraySize22; i++)
    {
		for(int j = 0; j<arraySize22; j++)
		{
			printf("\nElements [%d][%d]: ",i,j);
			scanf("%d",&inputArray22[i][j]);
		}
    }
    /*Logic to calculate transpose of matrix*/
	int temp22 = 0;
	printf("\nTranspose matrix: \n");
    for(int i = 0; i<arraySize22; i++)
    {
		for(int j = 0; j<=i; j++)
		{
			if(i != j)
			{
				temp22 = inputArray22[i][j];
				inputArray22[i][j] = inputArray22[j][i];
				inputArray22[j][i] = temp22;
			}
		}
    }
	/*Print transpose matrix*/
    printf("\nFinal array: \n");
    for(int i = 0; i<arraySize22; i++)
    {
		for(int j = 0; j<arraySize22; j++)
		{
			printf("%d ",inputArray22[i][j]);
		}
		printf("\n");
    }
}

/**
Description: This function calculates sum of left diagonals of given matrix.
Parameter: NA
Return: NA
**/
void problem24()
{
	/*Declare variables*/
	int arraySize24 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize24);
	printf("Enter elements for array: ");
	int inputArray24[arraySize24][arraySize24];
	int sum24 = 0;
	/*Reading elements of an array and calculating sum of left diagonals*/
	for(int i = 0; i<arraySize24; i++)
	{
		for(int j = 0; j<arraySize24; j++)
		{
			printf("\nElement [%d][%d]: ",i,j);
			scanf("%d",&inputArray24[i][j]);
			if((i == j))
			{
				sum24 = sum24+inputArray24[i][j];
			}
		}
	}
	/*Prints data*/
	printf("Sum of diagonal: %d",sum24);
}

/**
Description: This function calculates sum of right diagonals of given matrix.
Parameter: NA
Return: NA
**/
void problem23()
{
	/*Declare variables*/
	int arraySize23 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize23);
	int inputArr23[arraySize23][arraySize23];
	int sum23 = 0;
	printf("Enter elements of array: ");
	/*Reading input values for an array*/
	for(int i = 0; i<arraySize23; i++)
	{
		for(int j = 0; j<arraySize23; j++)
		{
			printf("Element [%d][%d]: ",i,j);
			scanf("%d",&inputArr23[i][j]);
		}
	}
	/*Calculate right diagonal of matrix*/
	int j = arraySize23-1;
	for(int i = 0; i<arraySize23; i++)
	{
		sum23 = sum23 + inputArr23[i][j];
		j--;
	}
	/*Print data*/
	printf("\nSum of right diagonal : %d",sum23);
}

/**
Description: This function sets 0 on lower triangle of given matrix.
Parameter: NA
Return: NA
**/
void problem26()
{
	/*Declare variables*/
	int arraySize26 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize26);
	int inpAray26[arraySize26][arraySize26];
	printf("Enter elements of array: ");
	/*Read elements of array*/
	for(int i = 0; i<arraySize26; i++)
	{
		for(int j = 0; j<arraySize26; j++)
		{
            printf("\nElement [%d][%d]: ",i,j);
            scanf("%d",&inpAray26[i][j]);
		}
	}
	/*Setting 0 on lower triangle of given matrix*/
	for(int i = 0; i<arraySize26; i++)
	{
		for(int j = 0; j<=i; j++)
		{
			if(i != j)
			{
				inpAray26[i][j] = 0;
			}
		}
	}
	/*Print updated matrix*/
	printf("\nUpdated array: \n");
	for(int i = 0; i<arraySize26; i++)
	{
		for(int j = 0; j<arraySize26; j++)
		{
			printf("%d ",inpAray26[i][j]);
		}
		printf("\n");
	}
}

/**
Description: This function decides if matrix is sparse matrix.
Parameter: NA
Return: NA
**/
void problem29()
{
	/*Declare variables*/
	int arraySize29 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize29);
	int inpArray29[arraySize29][arraySize29];
	printf("Enter elements of the matrix: ");
	int zeroCount29 = 0;
	int nonZeroCount29 = 0;
	/*Read elements from user and counts number of zero and non zero elements*/
	for(int i = 0; i<arraySize29; i++)
	{
		for(int j = 0; j<arraySize29; j++)
		{
			printf("\nElement [%d][%d]: ",i,j);
			scanf("%d",&inpArray29[i][j]);
			if(inpArray29[i][j] == 0)
			{
				zeroCount29++;
			}
			else
			{
				nonZeroCount29++;
			}
		}
	}
	/*Condition to check if matrix is sparse*/
	if(zeroCount29>nonZeroCount29)
	{
		printf("\nMatrix is sparse matrix");
	}
	else
	{
		printf("\nMatrix is not sparse matrix");
	}
}

/**
Description: This function decides if matrix is identity matrix.
Parameter: NA
Return: NA
**/
void problem31()
{
	/*Declare variables*/
	int arraySize31 = 0;
	printf("Enert array size: ");
	scanf("%d",&arraySize31);
	printf("Enter elements of array: ");
	int inputArr31[arraySize31][arraySize31];
	int identityFlag31 = 0;
	int nonIdentityFlag = 0;
	/*Read input elements and check if matrix is identity*/
	for(int i = 0; i<arraySize31; i++)
	{
		for(int j = 0; j<arraySize31; j++)
		{
			printf("\nElement [%d][%d]: ",i,j);
			scanf("%d",&inputArr31[i][j]);
			if((i == j) && (inputArr31[i][j] == 1))
			{
				identityFlag31 = 1;
			}
			else if(inputArr31[i][j] == 0)
			{
				identityFlag31 = 1;
			}
			else
			{
				nonIdentityFlag++;
			}
		}
	}
	if(nonIdentityFlag > 0)
	{
		printf("Matrix is not identity matrix");
	}
	else
	{
		printf("Matrix is identity matrix");
	}
}

/**
Description: This function finds missing number from the array.
Parameter: NA
Return: NA
**/
void problem36()
{
	/*Declare variables*/
	int arraySize36 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize36);
	int inputArr36[arraySize36];
	int missingNum36 = 0;
	printf("Enter elements of matrix: ");
	/*Read variables from the user*/
	for(int i = 0; i<arraySize36; i++)
	{
		printf("\nElement %d: ",i);
		scanf("%d",&inputArr36[i]);
	}
	/*Logic to find missing number*/
	for(int i = 0; i<arraySize36-1; i++)
	{
		if((inputArr36[i+1] - inputArr36[i]) > 1)
		{
			missingNum36 = inputArr36[i+1] - 1;
		}
	}
	printf("\nMissing number is: %d",missingNum36);
}

/**
Description: This function merges 2 arrays in sorted way.
Parameter: NA
Return: NA
**/
void problem38()
{
	/*Declare variables*/
	int originalSize38 = 0;
	printf("Enter original array size: ");
	scanf("%d",&originalSize38);
	int originalArray38[originalSize38];

	int secondArraySize38 = 0;
	printf("\nEnter second array size: ");
	scanf("%d",&secondArraySize38);
	int secondArray38[secondArraySize38];
	/*Read elements for 1st array*/
	printf("\nEnter elements for 1st array: ");
	for(int i = 0; i<originalSize38; i++)
	{
		printf("\nElement [%d]: ",i);
		scanf("%d",&originalArray38[i]);
	}
	/*Read elements for 2nd array*/
	printf("\nEnter elements for 2nd array: ");
	for(int i = 0; i<secondArraySize38; i++)
	{
		printf("\nElement [%d]: ",i);
		scanf("%d",&secondArray38[i]);
	}
	/*Declare variables for combined array*/
	int combinedArray38[originalSize38+secondArraySize38];
    printf("\nSize of final array: %d",originalSize38+secondArraySize38);
    int incrementer38 = 0;
    int temp38 = 0;
    /*Logic to merge two arrays*/
    for(int i = 0; i<originalSize38; i++)
    {
		combinedArray38[i] = originalArray38[i];
    }
    for(int i = originalSize38; i<originalSize38+secondArraySize38; i++)
    {
		combinedArray38[i] = secondArray38[incrementer38];
		incrementer38++;
    }
    /*Print final array after sorting*/
	printf("\nFinal array: ");
    for(int i = 0; i<originalSize38+secondArraySize38; i++)
    {
		for(int j = i+1; j<originalSize38+secondArraySize38; j++)
		{
			if(combinedArray38[j] < combinedArray38[i])
			{
				temp38 = combinedArray38[i];
				combinedArray38[i] = combinedArray38[j];
				combinedArray38[j] = temp38;
			}
		}
    }
	/*Print data*/
    for(int i = 0; i<originalSize38+secondArraySize38; i++)
    {

		printf("\nElement [%d]: ",i);
		printf("%d",combinedArray38[i]);
    }
}


/**
Description: This function finds ceiling of any given number.
Parameter: NA
Return: NA
**/
void problem40()
{
	/*Declare variables*/
	int arraySize40 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize40);
	int inputArray40[arraySize40];
	printf("Enter array elements: ");
	/*Read numbers from user*/
	for(int i = 0; i<arraySize40; i++)
	{
		printf("\nElement [%d]: ",i);
		scanf("%d",&inputArray40[i]);
	}
	/*Input number whose ceiling has to be found*/
	int inputNum40 = 0;
	printf("Enter input number: ");
	scanf("%d",&inputNum40);
	int ceiling40 = 0;
	/*Logic to find ceiling of any input number*/
	for(int i = 0; i<arraySize40; i++)
	{
		if(inputNum40 < inputArray40[i])
		{
			ceiling40 = inputArray40[i];
			break;
		}
	}
	/*Print data*/
	printf("\nCeiling of %d is: %d",inputNum40,ceiling40);
}

void problem43()
{

}

int main()
{
	//problem1();
	//problem5();
	//problem7();
	//problem10();
	//problem13();
	//problem15();
	//problem16();
	//problem18();
	//problem19();
	//problem22();
	//problem24();
	//problem23();
	//problem26();
	//problem29();
	//problem31();
	//problem36();
	//problem38();
	problem40();
    return 0;
}
