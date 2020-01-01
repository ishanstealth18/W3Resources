#include <stdio.h>
#include <stdlib.h>


/**
Description: This method swaps number without using third variable.
Parameter: NA
Return: NA
*/
void swapNum()
{
	int x = 0;
	int y = 0;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);

	x = x+y;
	y = x-y;
	x = x-y;

	printf("\nx: %d y: %d",x,y);

}

int main()
{
	swapNum();
    return 0;
}
