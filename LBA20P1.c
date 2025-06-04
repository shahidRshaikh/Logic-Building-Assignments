/*
    Accept N numbers from user and accept one another number as No,
    check wheather No is present or Not.

    Input   :   N   :    6
                No  :    66
                Elements : 85   66   3   66   93   88
    
    Output  :   true
*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlage = true;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return bFlage;
        }
        else 
        {
            return bFlage;
        }
    }
}

int main()
{
    int iLenght = 0;
    int *Ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number of Element : \n");
    scanf("%d", &iLenght);

    Ptr =(int*)malloc(iLenght * sizeof(int));

    if(Ptr == NULL)
    {
        printf("Unable  to allocate Memory\n");
        return -1;
    }

    printf("Enter %d element \n",iLenght);
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        printf("Enter element : %d : ", iCnt+1);
        scanf("%d", &Ptr[iCnt]);
    }

    printf("\nEnter Number that you want to search : \n");
    scanf("%d", &iValue);

    bRet = Check(Ptr,iLenght,iValue);

    if(bRet == true)
    {
        printf("%d is present",iValue);
    }
    else
    {
        printf("%d is not present",iValue);
    }

    free(Ptr);

    return 0;
}