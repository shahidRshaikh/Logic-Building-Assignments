/*
   Accept N number from user check wheather that numbers contains 11 in it or not.

   Input   :     N    :      6

                 Elements : 85   66   11   80   93   88    

   Output  :     11 is present.      
*/

//////////////////////////////////////////////////////////////////////////////////////////////
// 
//  File Name :     LBA19P3.c
//  Description :   Accept N number from user,
//                  check wheather that numbers contains 11 in it or not.
//  Author :        Omkar Santosh Wagh
//  Date :          03/06/2025
// 
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Check
//  Description     : Accept  Array and Size of Element and return result.
//  Input Arguments : Integer array (Arr) - contains N elements
//                    Integer (iSize) - number of elements in the array
//  Output          : return bFlag.(true or false)
//  Author          : Omkar Santosh Wagh
//  Date            : 03/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
bool Check(int Arr[], int iSize)
{
    int iCnt = 0; 
    bool bFlag = true;
     // Loop counter for iteration

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] == 11) ) // Check number is equal to 11
        {
            return bFlag; // return True
        }
        else 
        {
            return bFlag; // return False
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : main
//  Description     : Accepts the number of elements from the user, allocates memory dynamically, 
//                    reads the input values, calls the Difference() function, and displays the result.
//  Input           : User given number for elements.
//  Output          : Display result(11 present or not).
//  Author          : Omkar Santosh Wagh
//  Date            : 03/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iLength = 0;   // Stores user input for the number of elements
    int *Ptr = NULL;   // Pointer for dynamic memory allocation
    int iCnt = 0;      // Loop counter
    bool bRet = false; // Stores result

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
   bRet =  Check(Ptr,iLength);

   if(bRet == true)
   {
        printf("11 is present");
   }
   else
   {
        printf("11 is not present");
   }

    // deallocate memory 
    free(Ptr);

    return 0;
}