/*
   Accept N number from user and return,
   difference between frequency of even numbers and odd numbers.

   Input   :     N    :      7

                 Elements : 85   66   3   80   93   88    90

   Output  :     1(4 - 3)      
*/

//////////////////////////////////////////////////////////////////////////////////////////////
// 
//  File Name :     LBA19P2.c
//  Description :   Accept N number from user and return ,
//                  difference between frequency of even numbers and odd numbers.
//  Author :        Omkar Santosh Wagh
//  Date :          03/06/2025
// 
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountEven
//  Description     : Accept  Array and Size of Element and return result.
//  Input Arguments : Integer array (Arr) - contains N elements
//                    Integer (iSize) - number of elements in the array
//  Output          : return frequency between even and odd number.
//  Author          : Omkar Santosh Wagh
//  Date            : 03/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
int Frequency(int Arr[], int iSize)
{
    int iCnt = 0; 
    int iFrequency1 = 0;
    int iFrequency2 = 0;     // Loop counter for iteration

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (((Arr[iCnt] %  2) == 0) ) // Check number is even
        {
            iFrequency1++; // Frequecny of Even number
        }
        else 
        {
            iFrequency2++; // Frequency of odd
        }
    }
    return iFrequency1 - iFrequency2;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : main
//  Description     : Accepts the number of elements from the user, allocates memory dynamically, 
//                    reads the input values, calls the Difference() function, and displays the result.
//  Input           : User given number for elements.
//  Output          : Display frequecy between Even and odd number.
//  Author          : Omkar Santosh Wagh
//  Date            : 03/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iLength = 0;   // Stores user input for the number of elements
    int *Ptr = NULL;   // Pointer for dynamic memory allocation
    int iCnt = 0;      // Loop counter
    int iRet = 0;      // Stores result

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

    // function Call 
   iRet =  Frequency(Ptr,iLength);

   // Display Result
   printf(" \nFrequency difference between Even and Odd are : %d",iRet);

    // deallocate memory 
    free(Ptr);

    return 0;
}