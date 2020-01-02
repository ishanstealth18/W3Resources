#include <stdio.h>
#include <stdlib.h>

/**
Description: This function prints basic details of pointers
Return: NA
Parameter: NA
*/
void problem1()
{
	/*Declare variables*/
	int m = 10;
	int n = 0;
	int o = 0;
	int *z = 0;
	/*Print data*/
	z = &m;
	printf("\nValue of z : %d",*z);
	printf("\nAddress of m: %p",&m);
	printf("\nAddress of n: %p",&n);
	printf("\nAddress of o: %p",&o);
	printf("\nAddress of z: %p",&z);
}

/**
Description: This function prints basic details of pointers
Return: NA
Parameter: NA
*/
void problem2()
{
	int m = 29;
	printf("Address of m: %p",&m);
	printf("\nValue of m: %d",m);

	int *ab = &m;
	printf("\nAddress of ab: %p",ab);
	printf("\nValue of ab: %d",*ab);

    m = 34;
    printf("\nAddress of ab: %p",ab);
	printf("\nValue of ab: %d",*ab);

	*ab = 7;
	printf("\nAddress of m: %p",&m);
	printf("\nValue of m: %d",m);


}

/**
Description: This function adds 2 numbers using pointers
Return: NA
Parameter: NA
*/
void problem4()
{
	/*Declare variables*/
	int x4 = 0;
	int y4 = 0;
	int *num1;
	int *num2;
	int sum4 = 0;
	/*Read variables*/
	printf("Enter number 1: ");
	scanf("%d",&x4);
	printf("Enter number 2: ");
	scanf("%d",&y4);
	num1 = &x4;
	num2 = &y4;
	/*Add 2 numbers*/
	sum4 = *num1 + *num2;
	printf("\nSum: %d",sum4);
}

/**
Description: This function takes 2 pointers as arguments and add them.
Return: NA
Parameter: Two pointers *x,*y
*/
void addNum_Problem5(int *x, int *y)
{
	int sum5 = *x + *y;
	printf("Sum: %d",sum5);
}

/**
Description: This function adds 2 numbers using pointers and call by reference
Return: NA
Parameter: NA
*/
void problem5()
{
	/*Declare variables*/
	int x5 = 0;
	int y5 = 0;
	/*Read variables*/
	printf("Enter x: ");
	scanf("%d",&x5);
	printf("Enter y: ");
	scanf("%d",&y5);
	/*Function to add two numbers*/
	addNum_Problem5(&x5,&y5);
}

/**
Description: This function swaps 2 numbers using pointers.
Return: NA
Parameter: NA
*/
void problem6()
{
	/*Declare variables*/
    int x6 = 0;
    int y6 = 0;
    int *temp6 = 0;
    int *ptr6;
    int *qtr6;
    /*read variables*/
    printf("Enter X: ");
    scanf("%d",&x6);
    printf("Enter Y: ");
    scanf("%d",&y6);
    ptr6 = &x6;
    qtr6 = &y6;
	/*Swap variables*/
    temp6 = ptr6;
    ptr6 = qtr6;
    qtr6 = temp6;
	/*Print final data*/
    printf("\nAfter swapping: ");
    printf("\nVAlue of X: %d",*ptr6);
	printf("\nVAlue of Y: %d",*qtr6);

}

/**
Description: This function prints elements in array using pointers.
Return: NA
Parameter: NA
*/
void problem7()
{
	/*Declare variables*/
	int arraySize7 = 0;
	printf("Enter array size: ");
	scanf("%d",&arraySize7);
	int inputArray7[arraySize7];
	/*Scan elements of array*/
	printf("Enter elements of an array: ");
	for(int i = 0; i<arraySize7; i++)
	{
		printf("\nElement [%d]: ",i);
		scanf("%d",&inputArray7[i]);
	}
	/*Created a pointer array and copy address of values stored in original array(inputArray7)*/
	int *pointerArray7[arraySize7];
    for(int i = 0; i<arraySize7; i++)
    {
		pointerArray7[i] = (&inputArray7[i]);
    }
	/*Print elements of an array*/
	printf("\nElements you entered are: ");
	for(int i = 0; i<arraySize7; i++)
	{
		printf("\nElement [%d]: %d",i,*(pointerArray7[i]));
	}
}


int main()
{
	//problem1();
	//problem2();
	//problem4();
	//problem5();
    //problem6();
    problem7();
    return 0;
}
