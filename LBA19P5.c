/*
   Accept N number from user and accept one another number as No return,
   frequency of No from it.

   Input   :     N    :      6

                 No   :      66

                 Elements : 85   66   3   66   93   88    

   Output  :     2     
*/

//////////////////////////////////////////////////////////////////////////////////////////////
// 
//  File Name :     LBA19P5.c
//  Description :   Accept N number from user and accept one another number as No return,
//                  frequency of No from it.
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
//                    Integer (iNo) - number to search frequency in Array
//  Output          : return frequency of No(iFrequency).
//  Author          : Omkar Santosh Wagh
//  Date            : 03/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0; // Loop counter for iteration
    int iFrequency = 0; // store frequency

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt]  == iNo) ) // Check element is equal to iValue
        {
           iFrequency++; // Frequecny of iValue
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
//  Output          : Display frequecy of NO.
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
    int iValue = 0;    // Stores user input for calculating frequency

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

    printf("\nEnter the Number that you want to search and check Frequecncy \n");
    scanf("%d", &iValue);
    // function Call 
   iRet =  Frequency(Ptr,iLength,iValue);

   // Display Result
   printf(" \nFrequency of %d are : %d",iValue,iRet);

    // deallocate memory 
    free(Ptr);

    return 0;
}

