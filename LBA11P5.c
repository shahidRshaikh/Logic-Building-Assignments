// Accept number from user and Display below pattern
// Input   :  8
// Output  :  2   4   6   8   10   12   14   16  

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA11P5.c
//  Description :   Accept number from user and Display pattern
//  Author :        Omkar Santosh Wagh
//  Date :          02/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :      Pattern
//  Description  :       Accept number from user and Display pattern
//  Input Arguments :    Integer
//  Output :             Integer
//  Author :             Omkar Santosh Wagh 
//  Date :               02/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo*2; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}