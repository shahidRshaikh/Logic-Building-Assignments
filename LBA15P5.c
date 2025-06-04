// Accept number of rows and number of columns from user and Display below pattern
// Input   :  iRow = 4     iCol = 4

/*
   Output  :  1    2    3    4    
              1    *    *    4   
              1    *    *    4
              1    2    3    4
*/

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA15P5.c
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
//  Output :             Special Symbol pattern
//  Author :             Omkar Santosh Wagh 
//  Date :               02/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            if((iCnt1 == 1) || (iCnt2 == 1) || (iCnt1 == iRow) || (iCnt2 == iCol))
            {
                printf("%d\t",iCnt2);
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

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}