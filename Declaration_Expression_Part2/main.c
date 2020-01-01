#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
@description: This functions prints 3 numbers in a row in increasing order
starting from 1. It accepts number of lines from user and prints n number
of lines.
@parameter: NA
@return: void
*/
void printNumbers()
{
    /*DEclaration of variables and reading from users*/
    int numOfLines = 0;
    printf("Enter number of lines: ");
    scanf("%d",&numOfLines);
    int temp = 1;

    /*Logic to print numbers*/
    for(int i = 1; i<=numOfLines;i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("%d ",temp);
            temp++;
        }
        printf("\n");
    }
}

/**
@description: This functions prints squares and cube of a number in single line.
It accepts number of lines from user and prints n number
of lines.
@parameter: NA
@return: void
*/
void writeSquaresCube()
{
    /*DEclaration of variables and reading from users*/
    int Lines = 0;
    printf("Enter number of lines: ");
    scanf("%d",&Lines);
    /*Logic to print squares and cube of a number on each line*/
    for(int j = 1; j<=Lines;j++)
    {
        printf("%d %d %d",j,(j*j),(j*j*j));
        printf("\n");
    }


}

/**
@description: This functions calculates sum of fractions with denominator increasing
till 50 and numerator is constant value 1.
@parameter: NA
@return: void
*/
void addFraction()
{
    /*Declaring variables and initializing*/
    int endValue = 0;
    printf("Enter number of lines: ");
    scanf("%d",&endValue);
    double sum = 0;
    int temp = 1;

    /*Logic to calculate sum*/
    for(int i = 1; i<=endValue; i++)
    {
        sum = (sum + (1/(double)temp));
        temp++;
    }
    printf("Total sum: %.2f",sum);
}

/**
@description: This functions calculates divisors of a given number.
@parameter: NA
@return: void
*/
void findDivisors()
{
    /*Declare variables*/
    int inpNum = 0;
    printf("Enter a number: ");
    scanf("%d",&inpNum);

    /*Logic to find divisors*/
    printf("Divisors: ");
    for(int i = 1; i<=inpNum; i++)
    {
        if((inpNum%i) == 0)
        {
            printf("\n%d",i);
        }
    }

}

/**
@description: This functions swaps numbers in a given array.
@parameter: NA
@return: void
*/

void problem51()
{
    /*Declaration of variables*/
    int numArr[5];
    printf("Input numbers in array: ");
    int temp1 = 0;
    for(int i = 0; i<5; i++)
    {
        scanf("%d",&numArr[i]);
    }
    /*Logic of swapping numbers in array*/
    temp1 = numArr[0];
    numArr[0] = numArr[4];
    numArr[4] = temp1;
    temp1 = numArr[1];
    numArr[1] = numArr[3];
    numArr[3] = temp1;
    /*Print array*/
    printf("\nUpdated array: ");
    for(int k = 0; k<5; k++)
    {
        printf("%d ",numArr[k]);
    }

}

/**
@description: This functions finds smallest number from given array and prints position too.
@parameter: NA
@return: void
*/
void problem52()
{
    /*Declaration of variables*/
    int numArr52[5];
    printf("Input numbers in array: ");
    int temp52 = numArr52[0];
    int position52 = 0;
    /*Read input*/
    for(int i = 0; i<5; i++)
    {
        scanf("%d",&numArr52[i]);
    }
    /*Logic to find smallest number*/
    for(int j = 0; j<5; j++)
    {
        if(numArr52[j] < temp52)
        {
            temp52 = numArr52[j];
            position52 = j;
        }
    }
    printf("\nSmallest num: %d position: %d",temp52,position52);


}

void problem55()
{
    int x = 0;
    int y = 0;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);

}

int main()
{
    //writeSquaresCube();
    //printNumbers();
    //addFraction();
    //findDivisors();
    //problem51();
    //problem52();
    return 0;
}
