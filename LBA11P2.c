// Accept number from user and Display below pattern
// Input   :  5
// Output  :  5     #      4      #     3      #    2   #   1   #

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA11P2.c
//  Description :   Accept number from user and Display pattern
//  Author :        Shahid Rajjak Shaikh
//  Date :          02/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :      Pattern
//  Description  :       Accept number from user and Display pattern
//  Input Arguments :    Integer
//  Output :             Integer, Special Symbol
//  Author :             Shahid Rajjak Shaikh 
//  Date :               02/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t#\t",iCnt);
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
