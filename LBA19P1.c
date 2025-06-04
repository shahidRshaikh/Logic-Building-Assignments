/*
   Accept N number from user and return frequency of even numbers.

   Input   :     N    :      6

                 Elements : 85   66   3   80   93   88

   Output  :     3      
*/

//////////////////////////////////////////////////////////////////////////////////////////////
// 
//  File Name :     LBA19P1.c
//  Description :   Accept N number from user and return frequency of even numbers.
//  Author :        Omkar Santosh Wagh
//  Date :          03/06/2025
// 
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountEven
//  Description     : Accept  Array and Size of Element and return frequency of even numbers.
//  Input Arguments : Integer array (Arr) - contains N elements
//                    Integer (iSize) - number of elements in the array
//  Output          : return frequency of N numbers to main
//  Author          : Omkar Santosh Wagh
//  Date            : 03/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
int CountEven(int Arr[], int iSize)
{
    int iCnt = 0; 
    int iFrequency = 0;     // Loop counter for iteration

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (((Arr[iCnt] %  2) == 0) ) // Check number is even
        {
            iFrequency++; // Frequecny of Even number
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
//  Output          : Display frequecy of even numbers.
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
   iRet =  CountEven(Ptr,iLength);

   // Display Result
   printf("Frequency of Even Numbers are : %d",iRet);

    // deallocate memory 
    free(Ptr);

    return 0;
}