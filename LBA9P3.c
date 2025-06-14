// write a program which accept number from user and count frequency of 2 in it

//////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA9P3.c
//  Description :   Accept number from user and check frequency of 2
//  Author :        Shahid Rajjak Shaikh
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

        if(iNo < 0)
    {
        iNo = -iNo;
    }
     iDigit = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \n",iDigit);

        if(iDigit == 2)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Count of 2 is %d \n",iRet);

    return 0;

}
