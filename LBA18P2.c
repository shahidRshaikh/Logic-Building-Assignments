/*
   Accept N number from user and display all such elemnts which are Divisible by 5.

   Input   :     N    :      6

                 Elements : 85   66   3   80   93   88

   Output  :     85   80
*/

//////////////////////////////////////////////////////////////////////////////////////////////
// 
//  File Name :     LBA18P2.c
//  Description :   Accept N number from user and display all such elemnts which are Divisible by 5.
//  Author :        Omkar Santosh Wagh
//  Date :          03/06/2025
// 
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Description     : check element is divisible by 5.
//  Input Arguments : Integer array (Arr) - contains N elements
//                    Integer (iSize) - number of elements in the array
//  Output          : Display the elements divisible by 5.
//  Author          : Omkar Santosh Wagh
//  Date            : 03/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
void Display(int Arr[], int iSize)
{
    int iCnt = 0;      // Loop counter for iteration

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 5) == 0) // Check if the number is divisible by 5
        {
            printf("%d\t", Arr[iCnt]);// Display the elements divisible by 5.
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : main
//  Description     : Accepts the number of elements from the user, allocates memory dynamically, 
//                    reads the input values, calls the Difference() function, and displays the result.
//  Input           : User given number for elements.
//  Output          : None (Display Function directly display result)
//  Author          : Omkar Santosh Wagh
//  Date            : 03/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iLength = 0;   // Stores user input for the number of elements
    int *Ptr = NULL;   // Pointer for dynamic memory allocation
    int iCnt = 0;      // Loop counter

    printf("Enter the number of elements: \n");
    scanf("%d", &iLength);

    // Validate user input 
    if (iLength <= 0)
    {
        printf("Error: Invalid input size. Please enter a positive number.\n");
        return -1;
    }

    // Dynamic memory allocation
    Ptr = (int*)malloc(iLength * sizeof(int));

    // Checking  memory allocation
    if (Ptr == NULL)
    {
        printf("Error: Unable to allocate memory.\n");
        return -1;
    }

    // Accept array elements from the user
    printf("Enter %d elements:\n", iLength);
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &Ptr[iCnt]);
    }

    // Call Difference function 
    Display(Ptr,iLength);

    // deallocate memory 
    free(Ptr);

    return 0;
}