// Accept number of rows and number of columns from user and Display below pattern
// Input   :  iRow = 4     iCol = 4

/*
   Output  :  *    *    *    #              
              *    *    #    @       
              *    #    @    @     
              #    @    @    @     
                
*/

//////////////////////////////////////////////////////////////////////////////////////////////
// 
//  File Name :     LBA17P2.c
//  Description :   Accept number of rows and columns from user and display a pattern
//  Author :        Omkar Santosh Wagh
//  Date :          03/06/2025
// 
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name :      DisplayPattern
//  Description  :       Prints a pattern based on user input
//  Input Arguments :    Integer, Integer
//  Output :             Prints Special Symbol pattern
//  Author :             Omkar Santosh Wagh
//  Date :               03/06/2025
// 
//////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPattern(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    //Input Validation
    if((iRow <= 0) || (iCol <= 0))
    {
        printf("Invalid input! Rows and columns must be positive integers.\n");
    }

    for(iCnt1 = iRow; iCnt1 > 0; iCnt1--)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            if(iCnt1 == iCnt2)
            {
                printf("#\t");
            }
            else if(iCnt1 < iCnt2)
            {
                printf("@\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    // Accept User input
    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d",&iValue2);

    // function call to Display Pattern
    DisplayPattern(iValue1,iValue2);

    return 0;
}