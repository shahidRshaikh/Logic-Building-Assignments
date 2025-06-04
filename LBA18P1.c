/*
   Accept N number from user and return difference between summation of even elements 
   and summation of Odd elements

   Input   :     N    :      6

                 Elements : 85   66   3   80   93   88

   Output  :     53   (234 - 181)
*/

//////////////////////////////////////////////////////////////////////////////////////////////
// 
//  File Name :     LBA18P1.c
//  Description :   Accept N number from user and return difference between 
//                  summation of even and Odd elements.
//  Author :        Omkar Santosh Wagh
//  Date :          03/06/2025
// 
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Difference
//  Description     : Calculates the difference between the sum of even numbers 
//                    and the sum of odd numbers from the given array.
//  Input Arguments : Integer array (Arr) - contains N elements
//                    Integer (iSize) - number of elements in the array
//  Output          : Returns an integer difference (Sum of evens - Sum of odds)
//  Author          : Omkar Santosh Wagh
//  Date            : 03/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
int Difference(int Arr[], int iSize)
{
    int iEvenSum = 0;  // Stores summation of even numbers
    int iOddSum = 0;   // Stores summation of odd numbers
    int iCnt = 0;      // Loop counter for iteration

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0) // Check if the number is even
        {
            iEvenSum = iEvenSum + Arr[iCnt]; // Add to even sum
        }
        else // for odd Number
        {
            iOddSum = iOddSum + Arr[iCnt];  // Add to odd sum
        }
    }

    // the difference and return the result
    return iEvenSum - iOddSum;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : main
//  Description     : Accepts the number of elements from the user, allocates memory dynamically, 
//                    reads the input values, calls the Difference() function, and displays the result.
//  Input           : User given number for elements.
//  Output          : Displays the difference between the summation of even and odd elements.
//  Author          : Omkar Santosh Wagh
//  Date            : 03/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iLength = 0;   // Stores user input for the number of elements
    int *Ptr = NULL;   // Pointer for dynamic memory allocation
    int iCnt = 0;      // Loop counter
    int iRet = 0;      // Stores the  result


    printf("Enter the number of elements: \n");
    scanf("%d", &iLength);

    // Validate user input 
    if (iLength <= 0)
    {
        printf("Error: Invalid input size. Please enter a positive number.\n");
        return -1;
    }

    // Dyanamic memory allocation
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
    iRet = Difference(Ptr, iLength);

    // Display difference
    printf("Difference between summation of even elements and summation of odd elements is: %d\n", iRet);

    // deallocated memory 
    free(Ptr);

    return 0;
}