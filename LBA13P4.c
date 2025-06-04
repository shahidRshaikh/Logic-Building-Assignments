// Accept number of rows and number of columns from user and Display below pattern
// Input   :  iRow = 4     iCol = 5

/*
   Output  :  4   4   4   4   4  
              3   3   3   3   3  
              2   2   2   2   2
              1   1   1   1   1
*/

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA13P4.c
//  Description :   Accept number of iRow and iCol from user and Display pattern
//  Author :        Omkar Santosh Wagh
//  Date :          02/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :      Pattern
//  Description  :       Used to Display pattern
//  Input Arguments :    Integer, Integer
//  Output :             Integer pattern
//  Author :             Omkar Santosh Wagh 
//  Date :               02/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    for(iCnt1 = iRow; iCnt1 > 0; iCnt1--)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            printf("%d\t",iCnt1);
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

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}