#include <stdio.h>
#include <stdlib.h>

/**
Description: This function calculates length of a string using pointers.
Param: NA
Return: NA
*/
void problem10()
{
    int stringSize10 = 0;
    printf("Enter string size: ");
    scanf("%d",&stringSize10);
    char inputStr10[stringSize10];
    printf("\nEnter string: ");
    scanf("%s",inputStr10);

    int count10 = 0;
    char *ptrInputStr[stringSize10];
    for(int i = 0; i<stringSize10; i++)
    {
        ptrInputStr[i] = (&inputStr10[i]);
        count10++;
    }
    printf("Count: %d",count10);
}

/**
Description: This function swaps 3 numbers with each other using pointers
Param: Three integers pointers Num1,Num2,Num3
Return: NA
*/
swapNum_Prob11(int *Num1, int *Num2, int *Num3)
{
    /*Declare variables*/
    int temp11 = 0;
    int temp_2_11 = 0;
    /*Logic to swap all three numbers*/
    temp11 = Num1;
    temp_2_11 = Num2;
    Num1 = Num3;
    Num2 = temp11;
    Num3 = temp_2_11;
    /*Print data*/
    printf("\nValues after swapping: ");
    printf("\nValue of x: %d",*Num1);
    printf("\nValue of y: %d",*Num2);
    printf("\nValue of z: %d",*Num3);
}

/**
Description: This function swaps 3 numbers with each other using pointers
Param: NA
Return: NA
*/
void problem11()
{
    /*Declare variables*/
    int x11 = 0;
    int y11 = 0;
    int z11 = 0;
    /*Read variables*/
    printf("Enter x: ");
    scanf("%d",&x11);
    printf("\nEnter y: ");
    scanf("%d",&y11);
    printf("\nEnter z: ");
    scanf("%d",&z11);
    /*Print data*/
    printf("\nValues before swapping: ");
    printf("\nValue of x: %d",x11);
    printf("\nValue of y: %d",y11);
    printf("\nValue of z: %d",z11);
    /*Calling function to swap data*/
    swapNum_Prob11(&x11,&y11,&z11);
}

/**
Description: This function calculates factorial of any given number.
Param: NA
Return: NA
*/
void problem12()
{
    /*Declare variables*/
    int inputNum12 = 0;
    printf("Enter input number: ");
    scanf("%d",&inputNum12);
    /*Assigning to pointer*/
    int *ptrNum = 0;
    ptrNum = &inputNum12;
    int factorialSum = 1;
    /*Logic to calculate factorial using pointers*/
    while((*ptrNum) > 0)
    {
        factorialSum = factorialSum * (*ptrNum);
        (*ptrNum)--;
    }
    /*Print data*/
    printf("\nFactorial of input number is %d",factorialSum);
}

/**
Description: This function calculates number of factorial and consonants in a given string.
Param: NA
Return: NA
*/
void problem13()
{
    /*Declare variables*/
    int stringSize13 = 0;
    printf("String size: ");
    scanf("%d",&stringSize13);
    char inputString[stringSize13];
    printf("Enter input string: ");
    scanf("%s",inputString);
    /*Copying string to pointer*/
    char *ptrString13[stringSize13];
    for(int i = 0; i<stringSize13; i++)
    {
        ptrString13[i] = &inputString[i];
    }
    /*Logic to determine if letter is vowel or consonants*/
    int vovelCount = 0;
    int consonantCount = 0;
    for(int i = 0; i<stringSize13; i++)
    {
        if((*ptrString13[i]) == 'a' || (*ptrString13[i]) == 'e' || (*ptrString13[i]) == 'i' || (*ptrString13[i]) == 'o'
           || (*ptrString13[i]) == 'u')
        {
            vovelCount++;
        }
        else
        {
            consonantCount++;
        }
    }
    /*Print data*/
    printf("\nVovels: %d",vovelCount);
    printf("\nConsonants: %d",consonantCount);
}

/**
Description: This function sorts an array in increasing order using pointers.
Param: NA
Return: NA
*/
void problem14()
{
    /*Declare variables*/
    int arraySize14 = 0;
    printf("Enter array size: ");
    scanf("%d",&arraySize14);
    int inputArray14[arraySize14];
    int *ptrInputArray[arraySize14];
    /*Read elements of an array*/
    for(int i = 0; i<arraySize14; i++)
    {
        printf("\nElement [%d]: ",i);
        scanf("%d",&inputArray14[i]);

    }
    /*Storing element of an array in pointer array*/
    for(int i = 0; i<arraySize14; i++)
    {
        ptrInputArray[i] = &inputArray14[i];
    }
    /*Logic to sort elements in array*/
    int temp14 = 0;
    for(int i = 0; i<arraySize14; i++)
    {
        for(int j = i+1; j<arraySize14; j++)
        {
            if(*ptrInputArray[j] <= *ptrInputArray[i])
            {
                temp14 = ptrInputArray[i];
                ptrInputArray[i] = ptrInputArray[j];
                ptrInputArray[j] = temp14;
            }
        }
    }
    /*Print data*/
    printf("\nUpdated array: ");
    for(int i = 0; i<arraySize14; i++)
    {
        printf("\nElement [%d]: %d",i,(*ptrInputArray[i]));
    }
}



int main()
{
    //problem10();
    //problem11();
    //problem12();
    //problem13();
    //problem14();
    problem21();
    return 0;
}
