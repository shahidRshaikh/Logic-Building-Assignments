/*
    Accept N numbers from user and accept one another number as No,
    return index of last occurrence of that No.

    Input   :   N   :    6
                No  :    66
                Elements : 85   66   3   66   93   88
    
    Output  :   3

    Input   :   N   :    6
                No  :    12
                Elements : 85   66   3   66   93   88
    
    Output  :  -1
*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = iSize; iCnt >= 0 ; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int iLenght = 0;
    int *Ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

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

    iRet = FirstOcc(Ptr,iLenght,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last Occurence of Number is %d", iRet);
    }

    free(Ptr);

    return 0;
}