#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
Description: This method implements logic for printing basic personla
details using scanf and printf.
@parameter: NA
@return: void
**/
void printPersonalDetails()
{
    /*Declaring local variables*/
    char name[30];
    char birthDate[11];
    char mobileNum[11];
    /*Scanning input for all the details*/
    printf("\nEnter your name: ");
    scanf("%s",&name);
    printf("\nEnter DOB: ");
    scanf("%s",&birthDate);
    printf("\nEnter mobile number: ");
    scanf("%s",&mobileNum);
    /*Printing the details which were scanned*/
    printf("\nName is: %s",name);
    printf("\nDOB is: %s",birthDate);
    printf("\nMobile is: %s",mobileNum);
}
/**
Description: This method implements logic for printing alphabets F
and C using '#' symbol. This method uses 2d array to print.
@parameter: NA
@return: void
**/
void printFAndCBlock()
{
    /**Print F block, using 2d array*/
    for(int i = 0; i<6; i++)
    {
        if(i == 0)
        {
            for(int j = 0; j<5; j++)
            {
                printf("#");
            }
        }
        else if(i == 3)
        {
            for(int j = 0; j<4; j++)
            {
                printf("#");
            }
        }
        else
        {
            printf("#");
        }
    printf("\n");
    }
    /**Print C block*/
    printf("\n");
    for(int i = 0; i<9; i++)
    {
        if((i == 0) || (i == 8))
        {
            for (int j = 0; j<9; j++)
            {
                if((j == 0) || (j == 1) || (j == 8))
                {
                    printf(" ");
                }
                else
                {
                    printf("#");
                }
            }
        }
        else if((i == 1) || (i == 7))
        {
            for(int j = 0; j<9; j++)
            {
                if((j == 0) || (j == 3) || (j == 4) || (j == 5) || (j == 6))
                {
                    printf(" ");
                }
                else
                {
                    printf("#");
                }
            }
        }
        else
        {
            printf("#");
        }
        printf("\n");
    }

}

/**
Description: This function implements logic to reverse string.
It takes string input as parameter. First it scans string as input and counts it's length.
It then prints string in reverse order using for loop with length as count.
@parameter: char inputstr
@return: char
**/
char printReverse(char inputStr[50])
{
    /**String to be scanned*/
    printf("Enter string to be reverse: ");
    scanf("%s",inputStr);
    printf("\nInput string is: %s",inputStr);
    /**Calculating length of string*/
    int count = 0;
    int i = 0;
    while(inputStr[i] != '\0')
    {
        count++;
        i++;
    }
    printf("\nCount is: %d",count);
    /**Printing reverse string*/
    printf("\nReverse string is: ");
    for(int j = count; j>=0; j--)
    {
        printf("%c",inputStr[j]);
    }
    return inputStr;

}

/**
Description: This function implements logic to find area and perimeter
of rectangle. Length and width are hardcoded.
@parameter: NA
@return: void
**/
void computePerimeterArea()
{
    int height = 7;
    int width = 5;
    printf("Perimeter of rectangle: %d inches", 2*(height+width));
    printf("\nArea of rectangle: %d inches", height*width);
}

/**
Description: This function implements logic to find area and perimeter
of circle. Radius is hardcoded.
@parameter: NA
@return: void
**/
void computePerimeterAreaOfCircle()
{
    int radius = 6;
    printf("Perimeter of rectangle: %.6f inches", (2 * 3.14 * radius));
    printf("\nArea of rectangle: %.6f inches", (3.14 * (radius*radius)));
}

/**
Description: This function implements logic to display different varaibles
of different data type.
@parameter: NA
@return: void
**/
void displayVar()
{
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("a+c: %d", a+c);
    printf("\nx + c: %f", x + c);
    printf("\ndx + x: %d", dx + x);
    printf("\n((int) dx) + ax: %d", ((int) dx) + ax);
    printf("\na + x: %f", a + x);
    printf("\ns + b: %d", s + b);
    printf("\nax + b: %d", ax + b);
    printf("\ns + c: %d", s + c);
    printf("\nax + c: %d", ax + c);
    printf("\nax + ux: %d", ax + ux);
}

/**
Description: This function implements logic to count years, weeks and days on
basis of input days.
@parameter: NA
@return: void
**/
void countYearsWeeksDays()
{
    /*Declaring variables*/
    int inputDays = 1329;
    int years = inputDays/365;
    int remainingDays = inputDays - (years*365);
    int weeks = remainingDays/7;
    int days = remainingDays - (weeks*7);
    /*Printing variables*/
    printf("Years: %d",years);
    printf("\nRemaining days: %d",remainingDays);
    printf("\nWeeks: %d",weeks);
    printf("\nDays: %d",days);

}

/**
Description: This function implements logic to calculate employee's salary.
@parameter: NA
@return: void
**/
void calculatePay()
{
    /*Declaring variables*/
    int employeeId = 0;
    int workingHours = 0;
    long receivedSalary;
    /*Printing variables*/
    printf("Enter employee id: ");
    scanf("%d",&employeeId);
    printf("\nWorking Hours: ");
    scanf("%d",&workingHours);
    printf("\nSalary per hour receive: ");
    scanf("%ld",&receivedSalary);
    double salary = workingHours * receivedSalary;
    printf("\nEmployee id: %d \t Total salary per hour: %.2f",employeeId,salary);
}

/**
Description: This function implements logic to calculate maximum number
from 3 input numbers.
@parameter: NA
@return: void
**/
int findMaximum()
{
    /*Declaring variables*/
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    /*Scanning input numbers*/
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("\nEnter 2nd number: ");
    scanf("%d",&num2);
    printf("\nEnter 3rd number: ");
    scanf("%d",&num3);
    /*Logic to compare all 3 numbers and finding maximum*/
    if((num1>num2) && (num1>num3))
    {
        printf("%d is greatest",num1);
    }
    else if((num2>num3) && (num2>num1))
    {
        printf("%d is greatest",num2);
    }
    else
    {
        printf("%d is greatest",num3);
    }

}

/**
Description: This function implements logic to calculate number of notes for
a particular denominations. It asks user to input denominations valueand calculate
remaining bank account till it becomes 0.
@parameter: NA
@return: void
**/
void breakBankAmount()
{
    /*Declaring and scanning input values*/
    int bankAmount = 0;
    printf("Input bank amount: ");
    scanf("%d",&bankAmount);
    int resultantAmt = 0;
    int denominationValue = 0;
    int denom = 0;
    int denomQuantity = 0;

    /*Logic to count number of denominations for an input bank amount*/
    while(bankAmount >0)
    {
        printf("\nEnter denomination: ");
        scanf("%d",&denom);
        denominationValue = bankAmount/(denom);
        printf("\n%d notes of %d dollars",denominationValue,denom);
        bankAmount = bankAmount - (denominationValue*denom);
        printf("\nRemaining bank amount: %d",bankAmount);
    }


}

/**
Description: This function implements logic to calculate Bhaskaras formula
for roots.
@parameter: NA
@return: void
**/
void bhaskaraRootFormula()
{
    /*Declaration of variables*/
    int a = 0;
    int b = 0;
    int c = 0;
    /*Reading of variables*/
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    /*Logic for Bhaskara formula*/
    double delta = sqrt((b*b)-(4*a*c));
    double positiveRoot = (-b + (delta))/(4*a);
    double negativeRoot = (-b - (delta))/(4*a);

    /*Print details*/
    printf("Delta: %.6f",delta);
    printf("\nPositive root: %.6f",positiveRoot);
    printf("\nNegative root: %.6f",negativeRoot);
}

/**
Description: This function implements logic to calculate range of a
given number.
@parameter: NA
@return: void
**/
void checkRange()
{
    /*Declaring variables*/
    int inputNum = 0;
    int onesNum = 0;
    /*Read number*/
    printf("Enter a number: ");
    scanf("%d",&inputNum);
    /*Logic to check if number is in range*/
    if((inputNum<0) || (inputNum>80))
    {
        printf("Invalid number");
    }
    else
    {
        onesNum = inputNum/10;
        int endRange = ((onesNum*10) + 10);
        printf("Ranges is [0 to %d]",endRange);
    }

}

/**
Description: This function implements logic to calculate sum of odd
numbers from given input numbers.
@parameter: NA
@return: int
**/
int findOddSum()
{
    /*Declaring variables*/
    int number = 0;
    int count = 1;
    int sum = 0;
    /*Logic to identify odd numbers and sum it up*/
    while(count<=5)
    {
        printf("\nEnter %d number: ",count);
        scanf("%d",&number);
        if((number%2) != 0)
        {
            sum = sum + number;
        }
    count++;
    }
    printf("Sum is: %d",sum);
    return sum;
}

/**
Description: This function implements logic to decide if triangle is possible
and calculates its perimeter.
@parameter: NA
@return: void
**/
void makeTriangle()
{
    int l1 = 0;
    int l2 = 0;
    int l3 = 0;

    printf("Enter length 1: ");
    scanf("%d",&l1);
    printf("Enter length 2: ");
    scanf("%d",&l2);
    printf("Enter length 3: ");
    scanf("%d",&l3);

    if((l1+l2>l3) && (l2+l3>l1) && (l1+l3>l2))
    {
        printf("\nTriangle possible");
        printf("\nPerimeter of triangle is :%d", (l1+l2+l3));
    }
    else
    {
        printf("\nTriangle not possible");
    }
}

/**
Description: This function implements logic to print even numbers between
1 and 50 included.
@parameter: NA
@return: void
**/
void printEven()
{
    int num = 1;
    printf("Even numbers are: \n");
    /*Logic to decide even numbers and print*/
    while(num<=50)
    {
        if(num%2 == 0)
        {
            printf("%d ",num);
        }
        num++;
    }
}

/**
Description: This function implements logic to count positive and negative
numbers.
@parameter: NA
@return: void
**/
void countPositiveNegative()
{
    /*Declaring variables*/
    int countPositiveNegativeNum = 0;
    int initialCount = 1;
    int positiveCount = 0;
    int negativeCount = 0;
    /*Logic to count positive and negative numbers*/
    while(initialCount <= 5)
    {
        printf("Enter number %d: ",initialCount);
        scanf("%d",&countPositiveNegativeNum);
        if(countPositiveNegativeNum < 0)
        {
            negativeCount++;
        }
        else
        {
            positiveCount++;
        }
        initialCount++;
    }
    printf("\nPositive count: %d",positiveCount);
    printf("\nNegative count: %d",negativeCount);
}

/**
Description: This function implements logic to calculate highest number
and locate its position.
@parameter: NA
@return: void
**/
void findPosition()
{
    /*Declaring the variables*/
    int countPosition = 0;
    int numInput = 0;
    int numOfInt = 1;
    int tVar = 0;
    /*Logic to calculate highest number and locating its position*/
    while(numOfInt<=5)
    {
        printf("\nEnter %d number: ",numOfInt);
        scanf("%d",&numInput);
        if(numInput>tVar)
        {
            tVar = numInput;
            countPosition = numOfInt;
        }
        numOfInt++;
    }
    printf("\nHighest value is: %d \t Position: %d",tVar,countPosition);
}


int main()
{
    char inputString[50];
    //printPersonalDetails();
    //printFAndCBlock();
    //printReverse(inputString);
    //computePerimeterArea();
    //computePerimeterAreaOfCircle();
    //displayVar();
    //countYearsWeeksDays();
    //calculatePay();
    //findMaximum();
    //breakBankAmount();
    //bhaskaraRootFormula();
    //checkRange();
    //findOddSum();
    //makeTriangle();
    //printEven();
    //countPositiveNegative();
    //findPosition();
    return 0;
}
