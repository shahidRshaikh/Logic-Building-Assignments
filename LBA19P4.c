/*
   Accept N number from user and return frequency of 11.

   Input   :     N    :      7

                 Elements : 85   66   11   80   93   88    11

   Output  :     2     
*/

//////////////////////////////////////////////////////////////////////////////////////////////
// 
//  File Name :     LBA19P4.c
//  Description :   Accept N number from user and return frequency of 11.
//  Author :        Omkar Santosh Wagh
//  Date :          03/06/2025
// 
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Frequency
//  Description     : Accept  Array and Size of Element and return result.
//  Input Arguments : Integer array (Arr) - contains N elements
//                    Integer (iSize) - number of elements in the array
//  Output          : return frequency of 11(iFrequency).
//  Author          : Omkar Santosh Wagh
//  Date            : 03/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
int Frequency(int Arr[], int iSize)
{
    int iCnt = 0; // Loop counter for iteration
    int iFrequency = 0; // store frequency

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt]  == 11) ) // Check element is equal to 11
        {
           iFrequency++; // Frequecny of 11
        }
    }
    return iFrequency;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : main
//  Description     : Accepts the number of elements from the user, allocates memory dynamically, 
//                    reads the input values, calls the Difference() function, and displays the result.
//  Input           : User given number for elements.
//  Output          : Display frequecy of 11r.
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
   printf(" \nFrequency of 11 are : %d",iRet);

    // deallocate memory 
    free(Ptr);

    return 0;
}

